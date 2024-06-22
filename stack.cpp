#include <iostream>
using namespace std;
class stack
{
public:
    int size;
    int top;
    int *arr;
};

int isFull(stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(stack *ptr, int val)
{
    if (isFull(ptr))
    {
        cout << "satck is overflow" << endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(stack *ptr)
{
    if (isEmpty(ptr))
    {
        cout << "satck is Underflow" << endl;
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main()
{
    stack* sp = new stack;
    sp->arr = new int[sp->size];
    sp->size = 80;
    sp->top = -1;;
    sp->arr = new int[sp->size];
    
cout<<"the stack has benn created sucessfullly"<<endl;
;
cout<<"before pushing is empty"<<isEmpty(sp)<<endl;
cout<<"before pushing is full"<<isFull(sp)<<endl;

// push(sp,11);
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
cout<<"after pushing is full"<<isFull(sp)<<endl;
cout<<"after pushing is empty"<<isEmpty(sp)<<endl;

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