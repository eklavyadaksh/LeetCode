// Last updated: 10/01/2026, 11:52:30
class Solution {
public:
    int search(vector<int>& nums, int target) {
         int a=-1;
        for(int i=0;i<nums.size();i++){
           
            if(nums[i]==target)
            a=i;
        
            
        }
   return a; }
};