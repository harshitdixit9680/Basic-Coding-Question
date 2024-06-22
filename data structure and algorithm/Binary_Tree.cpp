#include<iostream>
using namespace std ;
class node{
	public:
	int data;
	node*left;
	node*right;
		
};

 node *Create_A_Node(int data){
	node *p; //create a node pointer
	p = (node*) new int(sizeof(node)); // Allocating memory in a heap
	p -> data = data; // setting a Data
	p ->left = NULL; //setting left and right children to null
	p ->right = NULL; // finally return a node
 }
int main(){
	node*p  = Create_A_Node(1);
	node*p1 = Create_A_Node(4);
	node*p2 = Create_A_Node(5);
	
	p ->left = p1;
	p ->right = p2;
	cout<<p;
	
	
	
	
	
	
	
//	constructing the root node
//	node *p;
//	p = (node*) new int(sizeof(node));
//	p ->left = NULL;
//	p ->right = NULL;
////	constructing th first node
//	node *p1;
//	p1 = (node*) new int(sizeof(node));
//	p1 ->left = NULL;
//	p1 ->right = NULL;
////	constructing th second node
//	node *p2;
//	p2 = (node*) new int(sizeof(node));
//	p2 ->left = NULL;
//	p2 ->right = NULL;
////	linking the root node with right and left childern
//	p ->left = p1;
//	p ->right = p2;
	return 0;
}
