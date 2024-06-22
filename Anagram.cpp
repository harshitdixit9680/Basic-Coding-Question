#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        // int n;
        // cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        // for (int i = 0; i < s1.length(); i++)
        // {
        //     cout<<s1[i]<<endl;
        // }
        if(s1.length() != s2.length()){
            cout<<"NO"<<endl;
        }
        int count = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            if(s1[i] == s2[i]){
                count++;
            }
        }
    if(s1.length()==s2.length() && s1.length() == count){
        cout<<"YES"<<endl;
    }

        

        

    }
    
}