// Last updated: 06/04/2026, 18:24:16
1class Solution {
2public:
3    bool check(vector<int>& nums) {
4        int count=0;
5        if(is_sorted(nums.begin(),nums.end()))
6        return true;
7        for(int i=1;i<nums.size();i++){
8            if(nums[i-1]>nums[i])
9            count++;
10            if(nums[nums.size()-1]>nums[0])
11             count++;
12        } return count==1;}
13};