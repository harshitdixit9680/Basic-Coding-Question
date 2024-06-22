
???????

2018?12?30?
[C++] What and How: error: request for member '...' in '...', which is of non-class type '...'
????,?????????????????????,????? compiler ???
???????? (line 195),????:

ListType list_t1(IntegerType());

?? compiler ?????????????,list_t1 ? function name,???? list_t1 ?? object ??? ListType ???????????

??????????????????????????? default constructor,??????? () ????????????????,?????????????:

ListType list_t1(IntegerType{});

?,??? list initialization ????? compiler IntegerType{} ?? function,??? object,???????????

????? (????????),???????:

ListType list_t1(int_type);

?? int_type ??????? object,???????

#include <string>
#include <unordered_map>
#include <iostream>

/*******************************************************************************
 * Interfaces for Database types
 *******************************************************************************/

enum DatabaseType {INTEGER, REAL, TEXT, MAP, LIST};
 
class TypeInterface {
public:
	TypeInterface() = default;
	TypeInterface(const TypeInterface&) = default;
	TypeInterface& operator= (const TypeInterface&) = default;
	virtual ~TypeInterface() = default;

	virtual DatabaseType type() const noexcept = 0;
	
	// Return a string representing this type
	// Notably, returned string cannot be used in underlying database directly.	
	virtual std::string to_string() const noexcept = 0;
	
	// Return a string representing this type that can be used in underlying database directly.
	//
	// Parameter:
	//	type2str: covert DatabaseType to real type in underlying database
	//
	// Exception:
	// 	type2str does not contain the conversion from type() to corresponding underlying database type.
	//  In this case, use default member function to_string() to return a result.
	virtual std::string to_string(const std::unordered_map<DatabaseType, std::string>& type2str) const = 0;
};

class PrimitiveType : public TypeInterface {};

/*******************************************************************************
 * Primitive database types
 *******************************************************************************/

class IntegerType : public PrimitiveType {
public:
	DatabaseType type() const noexcept override;
	std::string to_string() const noexcept override;
	std::string to_string(const std::unordered_map<DatabaseType, std::string>& type2str) const override;
};


class RealType : public PrimitiveType {
public:
	DatabaseType type() const noexcept override;
	std::string to_string() const noexcept override;
	std::string to_string(const std::unordered_map<DatabaseType, std::string>& type2str) const override;
};


class TextType : public PrimitiveType {
public:
	DatabaseType type() const noexcept override;
	std::string to_string() const noexcept override;
	std::string to_string(const std::unordered_map<DatabaseType, std::string>& type2str) const override;
};

/*******************************************************************************
 * Complex database types: collection
 *******************************************************************************/

class ListType : public TypeInterface {
public:
	// restriction: element type of a list must be primitive type
	// If the underlying database can remove this restriction,
	// change the parameter type to TypeInterface.
	ListType(const PrimitiveType& elem);
	ListType(const ListType& rhs) = default;
	ListType& operator= (const ListType& rhs) = default;
	~ListType() override = default;
	
	DatabaseType type() const noexcept override;
	std::string to_string() const noexcept override;
	std::string to_string(const std::unordered_map<DatabaseType, std::string>& type2str) const override;

private:
	const DatabaseType	elem_type;
	const std::string	type_string;
};


class MapType : public TypeInterface {
public:
	// restriction: key & value types of a map must be primitive types
	// If the underlying database can remove this restriction,
	// change the parameter type to TypeInterface.
	MapType(const PrimitiveType& key, const PrimitiveType& val);
	MapType(const MapType& rhs) = default;
	MapType& operator= (const MapType& rhs) = default;
	~MapType() override = default;
	
	DatabaseType type() const noexcept override;
	std::string to_string() const noexcept override;
	std::string to_string(const std::unordered_map<DatabaseType, std::string>& type2str) const override;

private:
	const DatabaseType	key_type, val_type;
	const std::string	type_string;
};

/*******************************************************************************
 * Implementations
 *******************************************************************************/

DatabaseType IntegerType::type() const noexcept 	{ return DatabaseType::INTEGER; }
std::string IntegerType::to_string() const noexcept	{ return "INTEGER"; }
std::string IntegerType::to_string(const std::unordered_map<DatabaseType, std::string>& type2str) const
{
	if (type2str.count(DatabaseType::INTEGER) > 0) {
		return type2str.at(DatabaseType::INTEGER);
	}
	else { return this->to_string(); }
}


DatabaseType RealType::type() const noexcept		{ return DatabaseType::REAL; }
std::string RealType::to_string() const noexcept	{ return "REAL"; }
std::string RealType::to_string(const std::unordered_map<DatabaseType, std::string>& type2str) const
{
	if (type2str.count(DatabaseType::REAL) > 0) {
		return type2str.at(DatabaseType::REAL);
	}
	else { return this->to_string(); }
}


DatabaseType TextType::type() const noexcept		{ return DatabaseType::TEXT; }
std::string TextType::to_string() const noexcept	{ return "TEXT"; }
std::string TextType::to_string(const std::unordered_map<DatabaseType, std::string>& type2str) const
{
	if (type2str.count(DatabaseType::TEXT) > 0) {
		return type2str.at(DatabaseType::TEXT);
	}
	else { return this->to_string(); }
}


ListType::ListType(const PrimitiveType& elem) :
	elem_type(elem.type()),
	type_string(std::string("list<") + elem.to_string() + '>')
{}
DatabaseType ListType::type() const noexcept { return DatabaseType::LIST; }
std::string ListType::to_string() const noexcept { return type_string; }
std::string ListType::to_string(const std::unordered_map<DatabaseType, std::string>& type2str) const
{
	if (type2str.count(elem_type) > 0) {
		return (std::string("list<") + type2str.at(elem_type) + '>');
	}
	else { return this->to_string(); }
}


MapType::MapType(const PrimitiveType& key, const PrimitiveType& val) :
	key_type(key.type()), val_type(val.type()),
	type_string(std::string("map<") + key.to_string() + ',' + val.to_string() + '>')
{}
DatabaseType MapType::type() const noexcept { return DatabaseType::MAP; }
std::string MapType::to_string() const noexcept { return type_string; }
std::string MapType::to_string(const std::unordered_map<DatabaseType, std::string>& type2str) const
{
	if ((type2str.count(key_type) > 0) && (type2str.count(val_type) > 0)) {
		return (std::string("map<") + type2str.at(key_type) + ',' + type2str.at(val_type) + '>');
	}
	else { return this->to_string(); }
}

/*******************************************************************************
 * Test
 *******************************************************************************/

int main()
{
	using namespace std;
	
	unordered_map<DatabaseType, string> type2str;
	type2str[DatabaseType::INTEGER] = "bigint";
	type2str[DatabaseType::REAL]	= "double";
	type2str[DatabaseType::TEXT]	= "string";
	type2str[DatabaseType::LIST]	= "list";
	type2str[DatabaseType::MAP]		= "map";
	
	IntegerType int_type;
	RealType	real_type;
	TextType	text_type;
	// Cannot use 'ListType	list_t1(IntegerType());'
	// because compiler may treat this line as a function declaration and list_t1 is a function name
	// In this case, you will get an error like below:
	// error: request for member ‘type’ in ‘list_t1’, which is of non-class type ‘ListType(IntegerType)’
	ListType	list_t1(IntegerType{});
	ListType	list_t2(RealType{});
	ListType	list_t3(TextType{});
	MapType		map_t1(int_type, int_type);
	MapType		map_t2(real_type, real_type);
	MapType		map_t3(text_type, text_type);
	MapType		map_t4(int_type, real_type);
	MapType		map_t5(int_type, text_type);
	MapType		map_t6(real_type, text_type);
	
	cout << "INTEGER: " << type2str.at(int_type.type()) << '\t' << int_type.to_string() << '\t' << int_type.to_string(type2str) << '\n'
		 << "REAL: " << type2str.at(real_type.type()) << '\t' << real_type.to_string() << '\t' << real_type.to_string(type2str) << '\n'
		 << "TEXT: " << type2str.at(text_type.type()) << '\t' << text_type.to_string() << '\t' << text_type.to_string(type2str) << '\n'
		 << "LIST: " << type2str.at(list_t1.type()) << '\t' << list_t1.to_string() << '\t' << list_t1.to_string(type2str) << '\n'
		 << "LIST: " << type2str.at(list_t2.type()) << '\t' << list_t2.to_string() << '\t' << list_t2.to_string(type2str) << '\n'
		 << "LIST: " << type2str.at(list_t3.type()) << '\t' << list_t3.to_string() << '\t' << list_t3.to_string(type2str) << '\n'
		 << "MAP: " << type2str.at(map_t1.type()) << '\t' << map_t1.to_string() << '\t' << map_t1.to_string(type2str) << '\n'
		 << "MAP: " << type2str.at(map_t2.type()) << '\t' << map_t2.to_string() << '\t' << map_t2.to_string(type2str) << '\n'
		 << "MAP: " << type2str.at(map_t3.type()) << '\t' << map_t3.to_string() << '\t' << map_t3.to_string(type2str) << '\n'
		 << "MAP: " << type2str.at(map_t4.type()) << '\t' << map_t4.to_string() << '\t' << map_t4.to_string(type2str) << '\n'
		 << "MAP: " << type2str.at(map_t5.type()) << '\t' << map_t5.to_string() << '\t' << map_t5.to_string(type2str) << '\n'
		 << "MAP: " << type2str.at(map_t6.type()) << '\t' << map_t6.to_string() << '\t' << map_t6.to_string(type2str) << '\n'
		;
	
	return 0;
}

