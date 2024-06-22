#include<iostream>
#include<stdlib.h>
using namespace std; 
class node{
 
public:
	int data;
	node*next;
	node*prev;
	};
void linkedlist(node*ptr){
	
	while(ptr!= NULL){
	
		cout<<"element is "<<ptr->data<<endl;
		ptr =ptr-> next;
		ptr = ptr->prev;
	}


}
int main(){
	node*head;
	node*second;
	node*third;
	node*fourth;
	
	head = (node*) malloc(sizeof(node));
	second = (node*) malloc(sizeof(node));
	third = (node*) malloc(sizeof(node));
	fourth = (node*) malloc(sizeof(node));
	head -> data =55;
	head ->prev =  NULL;
	head ->next =  second;

	second -> data =55;
	second ->prev =  head;
	second ->next =  third;

	third -> data =66;
	third ->prev =  second;
	third ->next =  third;
	
	fourth-> data =55;
	fourth ->prev =  third;
	fourth ->next =  fourth;
	
	linkedlist(head);
	
	
}
