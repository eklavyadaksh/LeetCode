// Last updated: 7/31/2026, 7:23:03 PM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> op(nums.size());
        int left=0,right=nums.size()-1;
        int idx=nums.size()-1;
        while(left<=right){
            if(abs(nums[left])<abs(nums[right])){
              op[idx]=nums[right]*nums[right];
              right--;
              }

            else {
             op[idx]=nums[left]*nums[left];
             left++;
            }  
            idx--;  
        }
       return op; }
};