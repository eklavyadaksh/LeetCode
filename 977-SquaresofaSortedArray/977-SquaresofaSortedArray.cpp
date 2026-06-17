// Last updated: 6/17/2026, 12:36:09 PM
1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        vector<int> op(nums.size());
5        int left=0,right=nums.size()-1;
6        int idx=nums.size()-1;
7        while(left<=right){
8            if(abs(nums[left])<abs(nums[right])){
9              op[idx]=nums[right]*nums[right];
10              right--;
11              }
12
13            else {
14             op[idx]=nums[left]*nums[left];
15             left++;
16            }  
17            idx--;  
18        }
19       return op; }
20};