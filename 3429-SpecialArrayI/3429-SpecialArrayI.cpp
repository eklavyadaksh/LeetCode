// Last updated: 7/31/2026, 7:22:19 PM
class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int count=0,left=0,right=1;
        
        if(nums.size()==1)
         return true;
         while(right<nums.size()){
            if((nums[left]%2==0 && nums[right]%2!=0)||(nums[right]%2==0 && nums[left]%2!=0))
           count++;
            left++;
            right++;

         }
        
if(count==nums.size()-1)
 return true;
 else
  return false;  }
};