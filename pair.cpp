#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
    cin>>n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
int count = 0;
sort(a,a+n);
sort(b,b+n);
for (int i = 0; i < n; i++)
{
    if(a[i] == b[i]){
        count++;
    }
    else{
        cout<<"0"<<endl;
    }
}
if(count == n){
    cout<<"1"<<endl;
}



    // for (int i = 0; i < n; i++)
    // {
    //     for (int  j = i+1; j < n; j++)
    //     {
    //         if(arr[i] == arr[j]){
    //             cout<<arr[i]<<endl;
    //         }
           
    //     }
        
    // }
    











//     sort(arr,arr+n);
//    int ans = arr[0] +arr[1];
//    cout<<ans<<endl;
   

    //  int currsum;
    //     for(int i = 0;i<n;i++){
    //         currsum = arr[i];
    //         for(int j = i+1;j<n;j++){
    //             currsum += arr[j];
    //              if(currsum == s){
    //                  cout<<i<<" "<<j<<endl;
    //                  break;
    //                  }
    //         }
    //     }
    // }
    // int total = n * (n+1)/2;
    // for (int i = 0; i < n-1; i++)
    // {
    //     total -= arr[i];
    // }
    // cout<<total;
    


    }
    return 0;
    
}