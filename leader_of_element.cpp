#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

while (t--)
{
    int n,k;
    cin>>n>>k;
    int count =0;
    int l = n/2;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

// sort(arr,arr+n,greater<int>());
for (int i = 0; i < n; i++)
{
  // if(i == k-1){
  //   cout<<arr[i];
  // }
  // cout<<arr[i]<<' ';
for(int j = i+1 ;j<n;j++){
  if((arr[i]+arr[j]) == k ){
    count++;
  }
}
}
cout<<count;










  // int maxi,count = 0;
  // for(int i = 0;i<n;i++){
  //   for (int j = 0; j < n; j++)
  //   {
  //       if(arr[i] == arr[j]){
  //           count++;
  //       }
  //       maxi = max(maxi,count); 
  //   }
    
  // }
  // if(l < maxi){
  //   cout<<maxi<<endl;
  // }
  // else{
  //   cout<<"-1"<<endl;
  // }


    // int max_from_right = arr[n-1];
    // cout<<max_from_right<<" ";
    //  for (int i = n-2; i >= 0; i--)
    //  {
    //    if (max_from_right < arr[i])
    //    {
    //     max_from_right = arr[i];
    //     cout<<max_from_right<<" ";
    //    }
       
        
    //  }
    
     
    
}
 return 0; 
}