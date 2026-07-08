// Last updated: 7/9/2026, 1:04:53 AM
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4       int write=0;
5       for(int i=0;i<nums.size();i++){
6        if(nums[i]!=0){
7         swap( nums[write],nums[i]);
8        
9          write++;
10          }
11       }
12        
13    }
14};