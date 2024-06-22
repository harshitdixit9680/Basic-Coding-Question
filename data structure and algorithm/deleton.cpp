#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
	public:
int data;
node * next;	
};
void linkedlisttravesal(node*ptr)
{
	while(ptr!= NULL){
	
		cout<<"element is "<<ptr->data<<endl;
		ptr =ptr-> next;
	}
}

node *deletefirst(node *head){
	node *ptr = head;
	head = head ->next ;
free(ptr);
return head;

}
node *deleteindex(node *head,int index){
node *p = head;
node *q = head -> next ;
for(int i =0;i<index-1;i++){
p = p ->next;
q = q ->next;
}
p ->next =q -> next;
free(q);
return head;
}

node *deleteatlast(node *head){
node *p = head;
node *q = head -> next ;
while(q -> next != NULL){
p = p ->next;
q = q ->next;
}
p ->next =NULL;
free(q);
return head;
}

node *deletevalue(node *head,int value){
node *p = head;
node *q = head -> next ;
while(p -> data != value,q -> next != NULL){
p = p ->next;
q = q ->next;
}
if(q ->data == value)
{
	p->next =q ->next;
	free(q);
}

return head;
}

int main(){
node * head ;
node * second ;
node * third ;
node * fourth ;
head = (node*) malloc(sizeof(node));
second = (node*) malloc(sizeof(node));
third = (node*) malloc(sizeof(node)); 
fourth = (node*) malloc(sizeof(node)); 
head-> data = 4; 
head -> next = second;
second-> data = 3; 
second -> next = third;
third-> data = 8; 
third -> next = fourth;  
fourth-> data = 1; 
fourth -> next = NULL;  
//cout<<"linked list before deletion"<<endl;
//linkedlisttravesal(head);
//
//head = deletefirst(head);
//cout<<"linked list after deletion"<<endl;;
//linkedlisttravesal(head);

// head = deleteatlast(head);
// linkedlisttravesal(head);
head = deletevalue(head,5);
 linkedlisttravesal(head);
return 0;
}
