#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
	public:
		int data ;
		node * next;
	
//		int size;
//		int *arr;
};
void linkedlisttravesal(node*ptr)
{
	while(ptr!= NULL){
	
		cout<<"element is "<<ptr->data<<endl;
		ptr =ptr-> next;
	}
}



int isempty(node*top){
if(top==NULL){
//cou<<"the stack is underflow"<<endl;
return 1;
}
else {
return 0;
 	} 
}

int isfull(node*top){
	 int * p = new int(sizeof(node));
	 if(p==NULL){
	 	return 1 ;
	 }else{
	 	return 0;
	 }
}

node*push(node*top,int x){
	 if(isfull(top)){
	 	cout<<"the stack is overflow"<<endl;
	 }
	 else{
	 	
	    node*n =(node*) new int(sizeof(node));
//	     node* n = ( node*) malloc(sizeof( node));
	 n->data=x;

	 	n->next = top;
	 	top = n;
	 	return top;
	 }
}
int pop( node** top){
    if(isempty(*top)){
        printf("Stack Underflow\n");
    }
    else{
        node* n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x; 
    }
}

int main(){
	node*top =NULL;
	top=push(top,78);
	  top = push(top, 78);
    top = push(top, 7);
    top = push(top, 8);
        int element = pop(&top);
cout<<"the popped of element"<<element;
    
    
	linkedlisttravesal(top);

	return 0;
}
