#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
signed main(){
int n;
cin>>n;
vector<int>a(n);
for(int i = 0;i<n;i++){
	cout<<a[i]<<endl;
}
map<int,int>freq;
for(int i=0;i<n;i++){
	freq[a[i]]++;
}
map<int,int> :: iterator it;
for(it = freq.begin();it != freq.end();it++){
	cout<<it->ff<<" "<<it->ss<<endl;
}
return 0;
}
