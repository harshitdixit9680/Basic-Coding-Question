#include<iostream>
using namespace std;
void Print_Array(int *A,int n){
	for(int i = 0;i<n;i++){
		cout<<" "<<A[i];
	}
	cout<<endl;
}
Selection_Sort(int *A,int n){
	
	for(int i = 0;i<n-1;i++){
		int indexofmin = i,temp;
		for(int j = i+1;j<n;j++){
		if(A[j]<A[indexofmin]){
			indexofmin = j;
		}
	}
		temp = A[i];
		A[i] = A[indexofmin];
		A[indexofmin] = temp ;
}
		}
int main(){
		int A[] = {1,45,2,37,3,78};
	int n = 6;
	Print_Array(A,n);
	Selection_Sort(A,n);
	Print_Array(A,n);
	return 0;
}
