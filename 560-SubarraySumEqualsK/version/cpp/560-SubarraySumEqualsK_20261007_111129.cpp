// Last updated: 10/7/2026, 11:11:29 AM
1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4       int prefix=0,ans=0;
5	unordered_map<int,int> mp;
6	mp[0]=1;
7	for(auto x:nums){
8	    prefix+=x;
9	    if(mp.find(prefix-k)!=mp.end()){
10	        ans+=mp[prefix-k];
11	    }
12	    
13	    mp[prefix]++;
14	}
15return ans; }
16};