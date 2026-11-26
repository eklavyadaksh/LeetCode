// Last updated: 11/26/2026, 11:48:23 PM
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n=nums.size();
        map<long long,long long> mpp;

        long long count=0;

        for(long long i=0;i<n;i++){
            int diff=i-nums[i];

            int good=mpp[diff];

            count+=i-good;

            mpp[diff]=good+1;
        }

        return count;
    }
};