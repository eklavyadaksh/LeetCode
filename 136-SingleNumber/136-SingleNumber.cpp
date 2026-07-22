// Last updated: 7/22/2026, 9:45:32 AM
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int ans=0;
5        for(int i=0;i<nums.size();i++){
6            ans=ans^nums[i];
7        }
8
9
10    return ans;}
11};