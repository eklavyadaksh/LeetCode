// Last updated: 11/26/2026, 11:47:48 PM
class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int val=a/b,count=0;
        for(int i=0;i<nums.size();i++){
            int odd=0,even=0;
            for(int j=i;j<nums.size();j++){
               
                    if(nums[j]%2==0)even++;
                    else odd++;
             
                
                if(odd!=0){
                int newval=even/odd;
                if(odd>0 &&  1LL * even * b <= 1LL * odd * a)count++;
                }
            }
        }

   return count; }
};