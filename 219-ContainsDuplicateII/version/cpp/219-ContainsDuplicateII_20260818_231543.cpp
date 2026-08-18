// Last updated: 8/18/2026, 11:15:43 PM
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4       unordered_map<int, int> mp;
5
6
7        for(int i=0;i<nums.size();i++){
8            if(mp.find(nums[i])!=mp.end()){
9                int previndex=mp[nums[i]];
10                if(i-previndex<=k)return true;
11            }
12               mp[nums[i]] = i;
13        }
14        
15         return false; }
16};