#include<iostream>
#include<stdlib.h>
using namespace std;

class node{
	public:
		int data;
		node * next;
};
	node*f= NULL;
	node*r= NULL;

void linkedlisttravesal(node*ptr)
{
cout<<"printing the element in this linked list"<<endl;
	while(ptr!= NULL){
cout<<"element is "<<ptr->data<<endl;
		ptr =ptr-> next;
	}
		
}

void enqueue(int val){
	node*n=(node*) new int(sizeof(node));
	if(n==NULL){
		cout<<"queue isfull"<<endl;
	}
	else{
    n->data=val;
	n->next=NULL;
	if(f==NULL){
		f=r=n;
	}
	else{
		r->next =n;
		r=n;
	}
	}
}

int dequeue(){
	int val =-1;
	node * ptr =f;
	if(f==NULL){
		cout<<"queue empty"<<endl;
	}
	else{
    f=f->next;
	val=ptr->data;
	free(ptr);
	}
	return val;
}



int main()
{
		
linkedlisttravesal(f);
//	cout<<"dequeing element"<<dequeue()<<endl;
	enqueue(454);
	enqueue(4);
	enqueue(45);
	enqueue(5);
	enqueue(3);
		cout<<"dequeing element"<<dequeue()<<endl;
		cout<<"dequeing element"<<dequeue()<<endl;
		cout<<"dequeing element"<<dequeue()<<endl;
		cout<<"dequeing element"<<dequeue()<<endl;
		cout<<"dequeing element"<<dequeue()<<endl;
		cout<<"dequeing element"<<dequeue()<<endl;
	linkedlisttravesal(f);
	return 0;
	
}
