//////#include<iostream>
//////using namespace std;
//////int main(){
//////    int n;	
//////	cin >>n;
//////	for(int i = 0;i<n;i++){
//////	int a;
//////	int b;
//////	cin>>a>>b;
//////	cout<<"sum is : "<<b<<endl;
//////	}
//////	return 0;
//////}
////#include<iostream>
////using namespace std;
////int main(){
////	int T;
////	cin>>T;
////while(T--){
////		int n;
////		cin>>n;
////		int ans = 0;
////		while(n>0){
////		int 	r = n%10;
//			ans =ans*10+r;
////			n= n/10;
////		
////		}
////		cout<<ans<<endl;
////	}
////	return 0;
////}
//
////Given aQ.1 n array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
////class Solution { 
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        vector<int>ans;
//	unordered_map<int,int>mpp;
//	for(int i =0;i<nums.size();i++){
//		if(mpp.find(target-nums[i]) != mpp.end()){
//			ans.push_back(mpp[target-nums[i]]);
//			ans.push_back(i);
//			return ans;
//		}
//		mpp[nums[i]] = i;
//			}
//return ans;
//    }
//};
