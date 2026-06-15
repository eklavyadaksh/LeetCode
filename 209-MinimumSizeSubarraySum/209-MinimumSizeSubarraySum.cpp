// Last updated: 6/15/2026, 12:52:30 PM
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int left=0;
5        int min_len=INT_MAX;
6        int window_sum=0;
7      
8        for(int right=0;right<nums.size();right++) {
9             window_sum+=nums[right];
10
11             
12               
13             while(window_sum>=target){
14                min_len=min(right-left+1,min_len);
15            
16               window_sum-=nums[left];
17               left++;
18             }
19               
20        }  
21
22    return (min_len == INT_MAX) ? 0 : min_len;
23    }
24};