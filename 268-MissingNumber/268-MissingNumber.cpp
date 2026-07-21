// Last updated: 7/21/2026, 7:00:55 PM
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        for(int i=0;i<nums.size();i++){
6            if(nums[i]!=i)
7               return i;
8        }
9        return nums.size();
10    }
11};