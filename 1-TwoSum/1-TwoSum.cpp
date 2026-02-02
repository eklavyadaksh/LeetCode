// Last updated: 02/02/2026, 14:19:00
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int,int> mp;
5        for(int i=0;i<nums.size();i++){
6            int need = target-nums[i];
7            if(mp.find(need)!=mp.end())
8             return {mp[need],i};
9
10             mp[nums[i]]=i;
11        }
12        return {};
13    }
14
15};