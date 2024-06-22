#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        if(arr[0] >= x ){
            cout<<false;
        }

        int i = 0, j = n-1;
        while (i<j){
            if((arr[i] + arr[j]) == x)
            {
                cout<<true;

            }

            else if((arr[i] + arr[j]) > x){
                j--;
            }
            else if((arr[i] + arr[j]) < x){
                i++;
            }

        }
       
        
        
    }

    return 0;
}