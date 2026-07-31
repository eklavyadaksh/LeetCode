// Last updated: 7/31/2026, 7:23:59 PM
#include <algorithm>

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(), greater<int>());
        for(int i=0;i<nums.size();i++){
         if(nums[k-1]==nums[k-1+i])
           return nums[k+i-1];
          

        }
   return nums[k-1]; }
};