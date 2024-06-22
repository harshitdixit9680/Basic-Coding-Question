#include<iostream>
#include<climits>
using namespace std;
void printarray(int*A,int n){
	for(int i = 0;i<n;i++){
		cout<<"element is "<<A[i]<<endl;
	}
}
int maximum(int A[],int n){
		int max = INT_MIN;
	for(int i = 0;i <n;i++){
		if(max<A[i]){
			max = A[i];
			
		}
	}
	return max;
}
void countsort(int *A,int n ){
	int i,j;
int max =maximum(A,n);
int* count = (int*) new int((max+1)*sizeof(int));
	
	for(int i = 0;i<max+1;i++){
		count[i] =  0;
		
	}
	for(int i = 0;i<n;i++){
  count[A[i]] = count[A[i]] + 1; 
			}
	i = 0;
	j = 0;
	while(i<=max){
		if(count[i]>0){
			A[j]=i;
			count[i] = count[i]-1;
			j++;
		}
		else{
			i++;
		}
	}
}



int main(){
	int A[] = {1,4,9,7,5,4,3};
	int n = 7;
	printarray(A,n); 
	cout<<"after count sort"<<endl;
     countsort(A,n);
	printarray(A,n) ;
	return 0;
	
}
