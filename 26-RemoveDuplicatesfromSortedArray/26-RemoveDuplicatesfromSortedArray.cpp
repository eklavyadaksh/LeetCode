// Last updated: 7/19/2026, 11:18:45 AM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int i=0;
5        for(int j=1;j<nums.size();j++){
6            if(nums[j]!=nums[i]){
7                nums[i+1]=nums[j];
8                i++;
9            }
10
11        }
12        return i+1;
13    }
14};