#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a =0,b =1,c ;
    if(n==0){
        cout<<"0"<<endl;
    }
   
    for (int i = 2; i <= n; i++)
    {
     c = a+b;
      a=b;
      b = c;

    }
    cout<<c;
}