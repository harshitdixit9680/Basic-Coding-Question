#include<iostream>
using namespace std;
//class{
//	public:
//		
//};
void printarray(int*A,int n){
	for(int i=0;i<n;i++)
	{
		cout<<"element is"<<A[i]<<endl;
}
}
void insertionsort(int *A,int n){
int key,j;
for(int i=1;i<=n-1;i++)
{
	key = A[i];
	j = i-1;
	while(j>=0&&A[j]<key){
		A[j+1]=A[j];
		j--;
	}
	A[j+1]= key;
	}	
}
int main(){
	int A[] = {12,54,65,7,23,9-1};
	int n = 6;
	printarray(A,n);
	cout<<"after insertion sort"<<endl;
	insertionsort(A,n);
	printarray(A,n);
return 0;	
}
