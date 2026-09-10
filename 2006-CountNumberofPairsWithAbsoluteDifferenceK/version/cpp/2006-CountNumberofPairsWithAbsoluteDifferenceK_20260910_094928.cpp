// Last updated: 9/10/2026, 9:49:28 AM
1class Solution {
2public:
3    int countKDifference(vector<int>& nums, int k) {
4        unordered_map<int,int> mpp;
5
6        int count=0;
7        for(auto it:nums) {
8            count+=mpp[it-k];
9            count+=mpp[it+k];
10            mpp[it]++;
11        }
12
13        return count;
14    }
15};