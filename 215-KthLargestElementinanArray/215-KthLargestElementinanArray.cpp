// Last updated: 31/03/2026, 22:15:56
1#include <algorithm>
2
3class Solution {
4public:
5    int findKthLargest(vector<int>& nums, int k) {
6        sort(nums.begin(),nums.end(), greater<int>());
7        for(int i=0;i<nums.size();i++){
8         if(nums[k-1]==nums[k-1+i])
9           return nums[k+i-1];
10          
11
12        }
13   return nums[k-1]; }
14};