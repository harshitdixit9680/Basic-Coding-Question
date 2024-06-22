#include<iostream>
#include<stdlib.h>
using namespace std;
class stack
{
	public:
int size;
int top;
char *arr;	
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

void push(stack*ptr,char val){
	if(isfull(ptr)){
		cout<<"stack is overflow  cannot push"<<val;
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]=val;
	}
}


char pop( stack* ptr){
    if(isempty(ptr)){
        cout<<"Stack Underflow Cannot pop from the stack"<<endl;
        return -1;
    }
    else{
    	char val = ptr->arr[ptr->top];
         ptr->top--;
        return val;
    }
}
 



int parenethesismatch(char * exp){
	stack*sp;
	sp->size= 100;
	sp->top=-1;
     sp->arr = (char *)new int(sp->size * sizeof(char));
	
	for(int i=0; exp[i] !='0';i++){
		if(exp[i]=='('){
		push(sp,'(');
	}
		else 	if(exp[i]==')'){
			if(isempty(sp)){
				return 0;
			}
			pop(sp);
		}		
	}

    if(isempty(sp)){
        return 1;
    }
    else{
        return 0;
    }

}
int main()
{
char * exp = "((8)(*--$$9))";
	if(parenethesismatch(exp)){
		cout<<"the parenthes is matching"<<endl;
		}
	else{
		cout<<"the parenthes is not matching "<<endl;
	}
		return 0;
}
