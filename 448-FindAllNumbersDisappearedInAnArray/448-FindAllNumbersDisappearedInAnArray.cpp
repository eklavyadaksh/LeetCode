// Last updated: 7/31/2026, 7:23:33 PM
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
            vector<int> ans;
            for(auto x:nums)mp[x]++;
            for(int i=0;i<nums.size();i++){
               
                
                if (!mp.contains(i+1))
                  ans.push_back(i+1);

            }return ans;
    }
};