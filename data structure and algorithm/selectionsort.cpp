#include<iostream>
using namespace std;
void printarray(int* A,int n){
	for(int i=0;i<n;i++){
		cout<<"element is"<<A[i]<<endl;
	}
}
selectionsort(int *A,int n){
	int indexofmin ,temp;
	cout<<"running selection sort ..."<<endl;
	for(int i=0;i<n-1;i++){
		indexofmin =i;
		for(int j =i+1;j<n;j++){
			if(A[j]<A[indexofmin]){
				indexofmin = j;
			}
		}
		temp = A[i];
		A[i] = A[indexofmin];
		A[indexofmin] = temp;
	}
	
}

int main(){
	int A[] ={3,5,2,13,2};
	int n = 5;
	printarray(A,n);
	selectionsort(A,n);
	printarray(A,n);
	return 0;
}
