#include<iostream>
using namespace std;
void Print_Array(int *A,int n){
	for(int i = 0;i<n;i++){ //for passes this loop
		cout<<" "<<A[i];
	}
	cout<<endl;
}
InsertionSort(int *A,int n){
	int key,j;
	for(int i = 1;i<=n-1;i++){
		key = A[i];
		j = i-1;
	//		loop for each pass
while(j >= 0 && A[j] < key){
	A[j+1] = A[j];
	j--;
}
A[j+1] = key;
	}
}

int main()
{
	int A[] = {1,45,2,37,3,78};
	int n = 6;
	Print_Array(A,n);
	InsertionSort(A,n);
	Print_Array(A,n);
}
