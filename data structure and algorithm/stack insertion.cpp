#include<iostream>
#include<stdlib.h>
using namespace std;
class stack
{
	public:
		int size;
		int top;
		int *arr;
		
};

int isempty(stack*ptr)
{
if(ptr->top ==-1)
{
	return 1;
}else{
return 0;
}
}

int isfull(stack*ptr)
{

if(ptr->top == ptr-> size-1)
{
	return 1;
}else{
return 0;
}
}
void push(stack*ptr,int val){
	if(isfull(ptr)){
		cout<<"stack is overflow  cannot push"<<val;
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]=val;
	}
}

//int pop(stack*ptr){
//	if(isempty(ptr)){
//		cout<<"stack is underflow  cannot pop";
//		return -1;
//	}
//	else{
//		int val;
//		ptr->top--;
//		return val;
//	}
//}
//
//
int pop( stack* ptr){
    if(isempty(ptr)){
        cout<<"Stack Underflow! Cannot pop from the stack";
        return -1;
    }
    else{
    	int val = ptr->arr[ptr->top];
         ptr->top--;
        return val;
    }
}
 


int main(){
	stack *sp= (stack*)malloc(sizeof(stack));
sp -> size= 10;
sp->top= -1;
sp->arr=(int*) malloc(sp->size*sizeof(stack));
cout<<"the stack has benn created sucessfullly"<<endl;
;
cout<<"before pushing is empty"<<isempty(sp)<<endl;
cout<<"before pushing is full"<<isfull(sp)<<endl;

push(sp,11);
push(sp,52);
push(sp,44);
push(sp,66);
push(sp,77);
push(sp,88);
push(sp,99);
push(sp,20);
push(sp,67);
push(sp,44);
push(sp,45);
cout<<"after pushing is full"<<isfull(sp)<<endl;
cout<<"after pushing is empty"<<isempty(sp)<<endl;

pop(sp);
cout<<"popped from the stack"<<pop(sp)<<endl;
cout<<"popped from the stack"<<pop(sp)<<endl;
cout<<"popped from the stack"<<pop(sp)<<endl;
cout<<"popped from the stack"<<pop(sp)<<endl;
cout<<"popped from the stack"<<pop(sp)<<endl;
cout<<"popped from the stack"<<pop(sp)<<endl;
cout<<"popped from the stack"<<pop(sp)<<endl;
cout<<"popped from the stack"<<pop(sp)<<endl;
cout<<"popped from the stack"<<pop(sp)<<endl;
cout<<"popped from the stack"<<pop(sp)<<endl;

return 0;

}
