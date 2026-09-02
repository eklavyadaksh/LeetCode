// Last updated: 9/2/2026, 6:04:41 PM
1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int low=0,high=nums.size()-1;
5        
6        int idx=0;
7        while(low<high){
8            int mid=low+(high-low)/2;
9            
10            if(nums[mid]<nums[mid+1])low=mid+1;
11            else high=mid;
12            
13        }
14       idx=low;
15        return idx;
16    }
17};