// Last updated: 15/01/2026, 16:32:35
1class Solution {
2public:
3    vector<int> runningSum(vector<int>& nums) {
4        
5        for(int i=1;i<nums.size();i++){
6            nums[i]=nums[i-1]+nums[i];
7        }
8        return nums;
9    }
10};