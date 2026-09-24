// Last updated: 9/24/2026, 4:21:35 PM
1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int low=0,high=nums.size()-1;
5        
6     
7        while(low<high){
8            int mid=low+(high-low)/2;
9            
10            if(nums[mid]<nums[mid+1])low=mid+1;
11            else high=mid;
12            
13        }
14       
15        return low;
16    }
17};