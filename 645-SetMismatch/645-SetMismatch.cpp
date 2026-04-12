// Last updated: 4/12/2026, 12:09:27 PM
1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        vector<int> ans;
5        int count=0;
6        for(int i=0;i<nums.size();i++){
7             int max=nums[i];
8            for(int j=0;j<nums.size();j++){
9           
10            if(nums[j]<max)
11             count++;
12        }
13        ans.push_back(count);
14        count=0;
15    }
16   return ans; }
17};