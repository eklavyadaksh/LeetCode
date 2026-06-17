// Last updated: 6/17/2026, 12:11:33 PM
1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        vector<int> op(nums.size());
5        for(int i=0;i<nums.size();i++){
6                op[i]=nums[i]*nums[i];
7        }
8        sort(op.begin(),op.end());
9    return op;}
10};