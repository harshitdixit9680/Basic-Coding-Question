#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class stack
{
	public:
int size;
int top;
char *arr;	
};
int stacktop(stack*sp){
	return sp-> arr[sp->top];
}

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
int precedence(char ch){
    if(ch == '*' || ch=='/')
        return 3;
    else if(ch == '+' || ch=='-')
        return 2; 
    else
        return 0;
}
int isoperator(char ch){
	if(ch=='*'|| ch=='/'||ch=='+'|| ch=='-')
return 1;
else 
return 0;
}
 char*infixtopostfix(char*infix)
 {
 	stack*sp = (stack*) new int(sizeof(stack));
 	sp->size =100;
 	sp->top =-1;
 	sp->arr = (char *) new int(sp->size*sizeof(char));
 char * postfix =  (char *) new int((strlen(infix)+1)  * sizeof(char));
 int i = 0;
 int j = 0;
 while(infix[i] !='\0'){
 	if(!isoperator(infix[i])){
 		postfix[j] =infix[i];
 		j++;
 		i++;
 		}
 		else{
 			if(precedence(infix[i])> precedence(stacktop(sp))){
 				push(sp,infix[i]);
 				i++;
 				
			 }
			 else{
			 	postfix[j]= pop(sp);
			 	j++;
			 	
			 }
		 }
 }
 while(!isempty(sp)){
 	postfix[j] = pop(sp);
 	j++;
 }
 postfix[j] ='0';
 return postfix;
 }
int main()
{
char * infix ="+b*c+(d*e)";
	cout<<"postfix is"<<infixtopostfix(infix);
		return 0;
}
