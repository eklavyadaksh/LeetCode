// Last updated: 7/30/2026, 9:34:13 PM
1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        int count=0;
5        int presum=0;
6        unordered_map<int ,int>  mp;
7        mp[0]=1;
8        for(int i=0;i<nums.size();i++){
9            presum+=nums[i];
10          int remove=presum-k;
11         count+=mp[remove];
12            mp[presum]+=1;           
13        
14       
15        
16        }
17   return count; }
18};