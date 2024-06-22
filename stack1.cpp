#include<iostream>
using namespace std;

 class stacks{
    public:
    int size;
    int top;
    int *arr;
};
int isEmpty(stacks*ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(stacks*ptr){
    if(ptr->top == ptr->size-1){
       
        return 1;
    }
    else{
        return 0;
    }
}
int pop(stacks*ptr){
    if(isEmpty(ptr)){
cout<<"The Stack Is Underflow"<<endl;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
        
    }
}

void push(stacks*ptr ,int val){
    if(isFull(ptr)){
 cout<<"The Stack Is OverFlow"<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;

    }
}

int peek(stacks*ptr,int i){
    int arrayind =ptr->top-i+1; 
    if (arrayind<0)
    {
        cout<<"This Not A Valid Postion"<<endl;
        return -1;
    }
    else{
        return ptr->arr[arrayind];
    }
    
}
int main(){
    stacks*sp = new stacks;
    sp->size = 12;
    sp->top =-1;
    sp->arr = new int[sp->size] ;
    // cout<<"the stack has benn created sucessfullly"<<endl;
;
cout<<"before pushing is empty :- "<<isEmpty(sp)<<endl;
cout<<"before pushing is full:- "<<isFull(sp)<<endl;
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
push(sp,44);
push(sp,44);
push(sp,44);

cout<<"After pushing is empty :- "<<isEmpty(sp)<<endl;
cout<<"After pushing is full:- "<<isFull(sp)<<endl;

pop(sp);
// cout<<"popped from the stack"<<pop(sp)<<endl;
// cout<<"popped from the stack"<<pop(sp)<<endl;
// cout<<"popped from the stack"<<pop(sp)<<endl;
// cout<<"popped from the stack"<<pop(sp)<<endl;
// cout<<"popped from the stack"<<pop(sp)<<endl;
// cout<<"popped from the stack"<<pop(sp)<<endl;
// cout<<"popped from the stack"<<pop(sp)<<endl;
// cout<<"popped from the stack"<<pop(sp)<<endl;
// cout<<"popped from the stack"<<pop(sp)<<endl;
// cout<<"popped from the stack"<<pop(sp)<<endl;
// cout<<"popped from the stack"<<pop(sp)<<endl;
// cout<<"popped from the stack"<<pop(sp)<<endl;
// cout<<"poppestd from the stack :- "<<peek(sp,3)<<endl;
for (int j = 1; j < sp->top+1; j++)
{
    cout<<"The Value At Position Is :- "<<j<<" "<<peek(sp,j)<<endl;
}

    return 0;
}