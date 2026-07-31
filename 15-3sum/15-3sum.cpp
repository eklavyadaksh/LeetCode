// Last updated: 7/31/2026, 7:24:49 PM
class Solution {
public:
     vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int left=i+1;
          int right=nums.size()-1;
         
          if(i > 0 && nums[i] == nums[i-1])
           continue;
        while(left<right){ 
           int sum=nums[i]+nums[left]+nums[right];
          if(sum == 0){
            v.push_back({nums[i],nums[left],nums[right]});
            left++;
            right--;
            while(left < right && nums[left] == nums[left-1])
           left++;
           while(left < right && nums[right] == nums[right+1])
            right--;


            }
          else if(sum>0)
            right--;
          else
            left++;

        }
     }
     return v;   
    }
};