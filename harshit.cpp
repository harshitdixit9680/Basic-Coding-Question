#include<bits/stdc++.h>
using namespace std ;

int factorial(int n){
    for (int i = n-1; i>1; i--)
    {
        n = n*i;
    }
    return n;
}


char accessbyindex(string s,int k){
    return s[k];
}

char insrtAtIndex(string str,string ch , int k){
    str.insert(k,ch);
    cout<<"Modified String  :- "<<str<<endl;

}

void removechar(char*s,char c){
    int j,n = strlen(s);
    for (int i=j = 0; i < n; i++)
    {
        if(s[i] != c){
            s[j++] = s[i];
        }
    }
    // s[j] = '/0';
    
}
 

int main(){
    // cout<<"hello world";
    // cout<<"The Value Of Factorial is :- "<<factorial(5)<<endl;
    string s = "harshit dixit";
    // int k = 5;
    // string ch = "for";
    // cout<<"The vale of the index is :- "<<accessbyindex(s,k)<<endl;
    // cout<<insrtAtIndex(s,ch,k)<<endl;
    // char st[] = "geeksforgeeks";
    // removechar(st,'g');
    // cout<<st<<endl;
    // s += ch;
    // cout<<s;
    reverse(s.begin(),s.end());
    cout<<s<<endl;


}