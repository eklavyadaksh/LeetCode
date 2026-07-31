// Last updated: 7/31/2026, 7:22:33 PM
class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        if(is_sorted(nums.begin(),nums.end()))
        return true;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i])
            count++;
            if(nums[nums.size()-1]>nums[0])
             count++;
        } return count==1;}
};