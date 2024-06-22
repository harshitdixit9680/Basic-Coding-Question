#include<iostream>
using namespace std;
void Print_Array(int *A,int n){
	for(int i = 0;i<n;i++){
		cout<<" "<<A[i];
	}
	cout<<endl;
}

//void Bubble_sort(int * A,int n){
//int temp;
//int isSorted = 0 ;
//for(int i = 0;i<n-1;i++){
//	cout<<"working on pass number : "<<i+1<<endl;
//	isSorted = 1;
//	for(int j = 0;j<n-1-i;j++){
//		isSorted = 1;
//		if(A[j]>A[j+1]){
//			temp = A[j];
//			A[j] = A[j+1];
//			A[j+1] = temp;
//			isSorted = 0;
//		}
//		if(isSorted){
//			return;
//		}
//	}
//}
//}

void Bubble_sort(int *A, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        	cout<<"working on pass number : "<<i+1<<endl;
        	isSorted = 1;
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp; 
            }
        }  
    } 
}
 


int main(){
	int A[] = {7,9,2,4,17,1};
	int n = 6;
	Print_Array(A,n);
		Bubble_sort(A,n);
	Print_Array(A,n);


	return 0;
	
}
