// Last updated: 7/31/2026, 7:22:27 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int pos=0;

        int neg=1;
        int n=nums.size();
        vector<int> ans(n);
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0 ){
               ans[pos]=nums[i];
                pos+=2;
        }
       else{
          ans[neg]=nums[i];
        neg+=2;
       }
        }
   return ans; 
    }
};