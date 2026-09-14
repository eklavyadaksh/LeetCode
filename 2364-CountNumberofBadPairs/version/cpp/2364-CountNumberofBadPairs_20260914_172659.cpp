// Last updated: 9/14/2026, 5:26:59 PM
1class Solution {
2public:
3    long long countBadPairs(vector<int>& nums) {
4        long long n=nums.size();
5        map<long long,long long> mpp;
6
7        long long count=0;
8
9        for(long long i=0;i<n;i++){
10            int diff=i-nums[i];
11
12            int good=mpp[diff];
13
14            count+=i-good;
15
16            mpp[diff]=good+1;
17        }
18
19        return count;
20    }
21};