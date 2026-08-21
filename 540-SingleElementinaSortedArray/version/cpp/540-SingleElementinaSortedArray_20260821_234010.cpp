// Last updated: 8/21/2026, 11:40:10 PM
1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4        int ans=0;
5        for(int i=0;i<nums.size();i++){
6            ans^=nums[i];
7        }
8    return ans;}
9};