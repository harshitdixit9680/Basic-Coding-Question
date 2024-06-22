#include<iostream>
using namespace std;
printarray(int *A,int n){
	for(int i = 0;i<n;i++){
		cout<<"element is"<<A[i]<<endl;
	}
}

int partition(int A[],int low,int high){
	int temp;
	int pivot=A[low];
	int i = low + 1;
	int j = high +1;
	do{
	while(A[i]<=pivot){
		i++;
	}
	while(A[j]>pivot){
		j--;
	}
	if(i<j){
		temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}
	
	} 
	while(i<j);
	
	temp = A[low];
		A[low] = A[j];
		A[j] = temp;
		return j;
}
void quicksort(int A[],int low , int high)
{
	if(low<high){

	int partitionindex; 
//	index of pivot after partition
	partitionindex =partition(A,low,high);
    quicksort(A,low,partitionindex-1); // sort left subarray
    quicksort(A,partitionindex+1,high); // sort right subarray
    	}
}
int main(){
	int A[] = {1,2,5,6,8,44,1,1,44};
	int n = 9;
	printarray(A,n);
	cout<<"after quick sort"<<endl;
    quicksort(A,0,n-1);
	printarray(A,n);
	return 0;
}
