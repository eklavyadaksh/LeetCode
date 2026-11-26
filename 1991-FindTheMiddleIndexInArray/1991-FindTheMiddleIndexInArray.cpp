// Last updated: 11/26/2026, 11:48:36 PM
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
       int totalsum = accumulate(nums.begin(), nums.end(), 0);
     int  lsum=0;
      

    for(int p=0;p<nums.size();p++){
        int rsum = totalsum-lsum-nums[p];

        if(lsum==rsum)
          return p;
    
          lsum+=nums[p];
    
          

      }
   return -1; 
    }
};