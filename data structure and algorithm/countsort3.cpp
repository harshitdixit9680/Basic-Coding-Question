#include<iostream>
using namespace std;
void Print_Array(int*A , int n){
	for(int i = 0;i<n;i++){
		cout<<" "<<A[i];
	}
	cout<<endl;
} 
int maximum(int *A,int n){
	int max = INT_MIN;
	for(int i = 0;i<n;i++){
		if(max<A[i]){
			max = A[i];
		}
	}
	return max;
}
void count_sort(int *A,int n){
	int max = maximum(A,n);
	int *count = (int*) new int((max+1)*sizeof(int));
	for(int i = 0;i<max+1;i++){
		count[i] =0;
	}
	for(int i = 0 ;i<n;i++){
		count[A[i]]  =  count[A[i]] + 1;
	}
	int i = 0;
	int j = 0;
	while(i<=max){
		if(count[i]>0){
		A[j] = i;
		count[i] = count[i] -1;
		j++;
}
	else{
		i++;
	}
		}
}
int main(){
	
	int A[] = {1,45,2,37,3,78};
	int n = 6;
	Print_Array(A,n);
	count_sort(A,n);
	Print_Array(A,n);
}





