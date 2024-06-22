#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main(){
unordered_set<int> s;
s.insert(45);
s.insert(55);
s.insert(65);
s.insert(75);
s.insert(55);
for(int i: s){
    cout<<i<<" ";
}cout<<endl;
cout<<"size of set : "<<s.size()<<endl;
//s.clear();
//cout<<"size of set : "<<s.size()<<endl;
int key = 55;
if(s.find(key) == s.end()){
    cout<<"the element not found : "<<endl;
}
else{
    cout<<" key  found : "<<endl;
}
int delete_key = 55;
s.erase(delete_key);
for(int i: s){
    cout<<i<<" ";
}cout<<endl;
cout<<"size of set : "<<s.size()<<endl;
if(s.count(75)){
    cout<<"key found"<<endl;
}
else{
    cout<<"not found"<<endl;
}
return 0;
}
