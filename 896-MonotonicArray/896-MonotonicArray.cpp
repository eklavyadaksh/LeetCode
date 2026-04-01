// Last updated: 01/04/2026, 23:52:52
1class Solution {
2public:
3    bool isMonotonic(vector<int>& nums) {
4        bool inc = true, dec = true;
5
6        for (int i = 1; i < nums.size(); i++) {
7            if (nums[i] > nums[i-1]) dec = false;
8            if (nums[i] < nums[i-1]) inc = false;
9        }
10
11        return inc || dec;
12    }
13};