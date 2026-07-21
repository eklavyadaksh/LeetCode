// Last updated: 7/21/2026, 7:11:24 PM
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int ans=nums.size();
5        for(int i=0;i<nums.size();i++){
6            ans=ans^i^nums[i];
7        }
8    return ans;}
9};