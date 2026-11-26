// Last updated: 11/26/2026, 11:48:34 PM
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;

        int count=0;
        for(auto it:nums) {
            count+=mpp[it-k];
            count+=mpp[it+k];
            mpp[it]++;
        }

        return count;
    }
};