// Last updated: 7/31/2026, 9:04:09 PM
1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        unordered_map<int,int> mp;
5        vector<int> v;
6        int n=nums.size();
7        for(auto x:nums){
8            mp[x]++;
9        }
10        for(auto const& [key,value]:mp){
11            if(value>n/3)v.push_back(key);
12        }
13    return v;}
14};