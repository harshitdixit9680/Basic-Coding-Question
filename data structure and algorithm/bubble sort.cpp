#include<iostream>
using namespace std;
void printarray(int *A , int n){
	for(int i=0;i<n;i++){
		cout<<"the element is"<<A[i]<<endl;
	}
}
void bubblesort(int *A , int n)
{
	int temp;
	int isSorted = 0;
	for(int i=0;i<n-1;i++){
		cout<<"working on passs number"<<i+1<<endl;
		isSorted = 1;
		for(int j = 0;j<n-1-i;j++)
{
	
	if(A[j]<A[j+1]){
		temp =A[j];
		A[j]=A[j+1];
		A[j+1]=temp;
		isSorted = 0;
		}
	}
	if(isSorted){
		return;
	}
  }
}

int main(){
	int A[]={12 ,54,65,7,23,9};
//	int A[]={1,2,3,4,5,6};
	int n = 6;
	printarray(A,n);
	cout<<"after the swaping"<<endl;
	bubblesort(A,n);
		printarray(A,n);
return 0;
}
