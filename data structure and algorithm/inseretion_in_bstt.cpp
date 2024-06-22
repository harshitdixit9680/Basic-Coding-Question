#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
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
 node*serachitr(node*root,int key){
 while(root != NULL){
 	if(key == root->data){
 		return root;
	 }
	 else if(key<root->data){
	 	root = root->left;
	 }
	 else{
	 	root = root->right;
	 }
 }
 return NULL;
 }
 void insert(node *root, int key){
   node *prev = NULL;
   while(root!=NULL){
       prev = root;
       if(key==root->data){
           cout<<"Cannot insert %d, already in BST"<< key;
           return;
       }
       else if(key<root->data){
           root = root->left;
       }
       else{
           root = root->right;
       }
   }
    node*  p5 = Create_A_Node(key);
   if(key<prev->data){
       prev->left =  p5;
   }
   else{
       prev->right =  p5;
   }
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
    insert(p,7);
    cout<<p->right->right->data<<endl;
	return 0;
}
