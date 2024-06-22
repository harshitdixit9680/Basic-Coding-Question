#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
unordered_map<string,int> umap;
umap["harshit"] = 44;
umap["dixit"]   = 55;
umap["koshal"]  = 77;
umap["tiwari"]  = 88;
/*for(auto i : umap){
    cout<<i.first<<" "<<i.second<<endl;
}
cout<<endl;*/
for(auto itr = umap.begin();itr != umap.end();itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
}
string key = "harshit";
if(umap.find(key)!=umap.end()){
    cout<<"key found :"<<endl;
}
else{
    cout<<"key not found :";
}
if(umap.find(key) != umap.end()){
    auto temp = umap.find(key);
    cout<<"key is :"<<temp->first<<endl;
    cout<<"value is :"<<temp ->second<<endl;
}
string data = "koshal";
umap.erase(data);
umap.insert(make_pair("mobile",17000));
for(auto i : umap){
    cout<<i.first<<" "<<i.second<<endl;
}
cout<<endl;
cout<<umap.size()<<endl;
return 0;
}
