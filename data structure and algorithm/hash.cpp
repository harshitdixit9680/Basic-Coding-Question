#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
//const int N = 1e5+10;
//const int m = 1e9+10;
//long long fact[N];
//int main(){
//	fact[0] = fact[1] = 1;
//	for(int i = 2; i < N ; ++i){
//		fact[i] = fact[i-1]*i;
//	}
//	int t;
//	cin>>t;
//	while(t--){
//		int n;
//		cin>>n;
//		cout<<fact[n]<<endl;
//	}
//	return 0;
//}



int main(){
	vector<unordered_set<int>s>;
	s.insert(5);
	s.insert(10);
	if(s.find == s.end){
		cout<<"not found"<<endl;
	}
	else{
		cout<<"found"<<endl;
	}
	for(auto it = s.begin();it != s.end()){
		cout<<(*it)<<endl;
	}
	cout<<s.size()<<endl;
}
