#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    //  char s[]  = "Harshit Dixit";
    // //  cout<<s<<endl;
    //  int len =strlen(s);
    //  cout<<len;
    // int n;
    // cin>>n;
    // char str[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>str[i];
    // }
    
    //  for (int i = 0; i < n; i++)
    //  {
    //     cout<<str[i]<<" ";
    //  }
     
    // string str ;
    // cin>>str;
    // stringstream obj(str);
    // string temp;
    // while (obj>>temp)
    // {
    //     cout<<temp<<" ";
    // }
    


    string str;
    string str1 = str;
    
    cin>>str;
   reverse(str.begin(),str.end());
   if(str1 == str){
    cout<<"1"<<endl;
   }
   else{
    cout<<"0"<<endl;
   }
// cout<<str<<endl;
return 0;
}