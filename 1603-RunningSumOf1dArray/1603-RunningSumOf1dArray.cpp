// Last updated: 7/31/2026, 7:22:41 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        for(int i=1;i<nums.size();i++){
            nums[i]=nums[i-1]+nums[i];
        }
        return nums;
    }
};