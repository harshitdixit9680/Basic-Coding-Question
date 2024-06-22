#include<iostream>
using namespace std;
class stack{
public:
int*arr;
int size;
int top;
};
int isEmpty(stack*ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(stack*ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(stack*ptr,int val){
    if(isFull(ptr)){
        cout<<"Stack Is Overflow"<<endl;
    }
    else{
        ptr->top++;
         ptr->arr[ptr->top] =  val;
    }
}

int pop(stack*ptr){
     if(isEmpty(ptr)){
        cout<<"Stack Is Underflow"<<endl;
    }
    else{
        
        int val = ptr->arr[ptr->top];
         ptr->top--;
         return val;

    }
}

int main(){
    stack*sp = new stack;
    sp->size = 8;
    sp->top = -1;
    sp->arr = new int[sp->size]; 
    cout<<"Stack is created succesfully"<<endl;
    cout<<"before pushing is empty"<<isEmpty(sp)<<endl;
cout<<"before pushing is full"<<isFull(sp)<<endl;
    push(sp,44);
    push(sp,44);
    push(sp,44);
    push(sp,44);
    push(sp,44);
    push(sp,44);
    push(sp,44);
    push(sp,44);
     cout<<"After pushing is empty"<<isEmpty(sp)<<endl;
cout<<"After pushing is full"<<isFull(sp)<<endl;
cout<<"popped from the stack"<<pop(sp)<<endl;
cout<<"popped from the stack"<<pop(sp)<<endl;
cout<<"popped from the stack"<<pop(sp)<<endl;
cout<<"popped from the stack"<<pop(sp)<<endl;
cout<<"popped from the stack"<<pop(sp)<<endl;
cout<<"popped from the stack"<<pop(sp)<<endl;
cout<<"popped from the stack"<<pop(sp)<<endl;
cout<<"popped from the stack"<<pop(sp)<<endl;
cout<<"popped from the stack"<<pop(sp)<<endl;
}