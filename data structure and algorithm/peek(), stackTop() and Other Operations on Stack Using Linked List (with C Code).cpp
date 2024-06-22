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

 
node* top = NULL;
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

int peek(int pos){
     node* ptr =top ;
 	for(int i=0;(i<pos-1&&ptr!=NULL);i++){
 		ptr =ptr->next;
 		
	 }
	 if(ptr!=NULL){ 
	 return ptr->data;
	 }
	 else {return -1;}             
 }

int main(){

	top = push(top, 28);
	top = push(top, 18);
    top = push(top, 15);
    top = push(top, 7);

    
	linkedlisttravesal(top);
for(int i= 0;i<=4;i++){
	cout<<"the value at postion"<<i <<"is"<<peek(i)<<endl;
}


	return 0;
}
