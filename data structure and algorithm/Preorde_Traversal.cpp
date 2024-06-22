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
 void Preorde_Traversal(node* root){
 	if( root != NULL){
 		cout<<root->data;
 		Preorde_Traversal(root ->left);
 		Preorde_Traversal(root ->right);
	 }	
 }
  void Postorder_Traversal(node* root){
 	if( root != NULL){
 		Postorder_Traversal(root ->left);
 		Postorder_Traversal(root ->right);
 		cout<<root->data;
	 }	
 }
  void Inorde_Traversal(node* root){
 	if( root != NULL){
 		Inorde_Traversal(root ->left);
 		cout<<root->data;
 		Inorde_Traversal(root ->right);
	 }	
 }
int main(){
	node*p  = Create_A_Node(7);
	node*p1 = Create_A_Node(2);
	node*p2 = Create_A_Node(1);
	node*p3 = Create_A_Node(0);
	node*p4 = Create_A_Node(4);
	
	p ->left = p1;
	p ->right = p2;
	p1 ->left = p3;
	p1 ->right = p4;
	Preorde_Traversal(p);
	cout<<endl;
	Postorder_Traversal(p);
	cout<<endl;
	Inorde_Traversal(p);
	return 0;
}
