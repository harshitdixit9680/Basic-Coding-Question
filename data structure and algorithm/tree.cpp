#include<iostream>
using namespace std;
class node{
	public:
		int data; 
		node* left;
		node* right;
		
};
node*createnode(int data){
	node*n;
	n= (node*) new int(sizeof(node));
	n->data =data;
	n->left =NULL;
	n->right =NULL;
return n;
}

int main(){
//node *p;
//p =  (node*) new int(sizeof(node));
//p->left =NULL;
//p->right =NULL;
//
//node*p1;
//p1 = (node*) new int(sizeof(node));
//p1->left =NULL;
//p1->right =NULL;
//
//node*p2;
//p2 = (node*) new int(sizeof(node));
//p2->left =NULL;
//p2->right =NULL;
//p->left =p1;
//p->right =p2;
node*p = createnode(2);
node*p1 = createnode(1);
node*p2 = createnode(4);
return 0;
 
}
