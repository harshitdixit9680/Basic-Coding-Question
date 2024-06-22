#include<iostream>
#include<stdio.h>
#include<malloc.h>
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
	p ->right = NULL; // finally retur6n a node
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
 int isBST(node*root){
 	static node*prev = NULL;
 	if ( root != NULL){
 		if(!isBST(root -> left)){
 			return 0;
		 }
		 if(prev != NULL && root->data <= prev ->data){
		 	return  0;
		 }
		 prev  = root;
		 return isBST(root -> right);
	 }
		 else {
		 	return 1;
		 }
 }
 
 node*search(node*root,int key){
 	if(root == NULL){
 		return  NULL;
	 }
	 if(key == root->data){
	 	return root;
	 }
	 else if(root->data>key){
	 	return search(root->left,key);
	 }
	 else{
	 	return search(root->right,key);
	 }
 }
 
 node*inorderPredessor(node*root){
 	root = root->left;
 	if(root->right != NULL){
 		root =root->right;
	 }
	 return root;
 }
 
 
 node*deleteNode(node*root,int value){
node*ipre;
if(root == NULL){ 
return NULL;
}
if( root->left == NULL,root->right == NULL){
	free(root);
	return NULL;
}
// 	search for the delete node
if(value<root ->data){
	deleteNode(root->left,value);
}
else if(value>root->data){
	deleteNode(root->right,value);
}
//deletion strategy node is found
else{
	ipre = inorderPredessor(root);
	root ->data = ipre->data;
	root->left =  deleteNode(root->left,ipre ->data);
}
return root;
 }
int main(){
	node*p  = Create_A_Node(5);
	node*p1 = Create_A_Node(3);
	node*p2 = Create_A_Node(6);
	node*p3 = Create_A_Node(1);
	node*p4 = Create_A_Node(4);
	
	p ->left = p1;
	p ->right = p2;
	p1 ->left = p3;
	p1 ->right = p4;
	Inorde_Traversal(p);
	cout<<endl;
	deleteNode(p,3);
	cout<<"after delete a node :"<<cout<<endl;
	Inorde_Traversal(p);
	return 0;
}
