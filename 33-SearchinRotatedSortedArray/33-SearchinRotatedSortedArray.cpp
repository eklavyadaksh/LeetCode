// Last updated: 08/04/2026, 18:20:26
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        for(int i=0;i<=nums.size()-1;i++){
5            if(nums[i]==target)
6             return i;
7            
8
9        }
10    
11    
12    return -1;}
13};