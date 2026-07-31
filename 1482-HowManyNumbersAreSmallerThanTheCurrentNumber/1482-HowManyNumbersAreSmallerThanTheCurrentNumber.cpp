// Last updated: 7/31/2026, 7:22:45 PM
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int count=0;
        for(int i=0;i<nums.size();i++){
             int max=nums[i];
            for(int j=0;j<nums.size();j++){
           
            if(nums[j]<max)
             count++;
        }
        ans.push_back(count);
        count=0;
    }
   return ans; }
};