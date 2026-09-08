// Last updated: 9/8/2026, 9:24:14 PM
1class Solution {
2public:
3    int smallestDivisor(vector<int>& nums, int threshold) {
4        int low=1,high=*max_element(nums.begin(),nums.end()), ans=  INT_MAX;
5        while(low<=high){
6            int mid=low+(high-low)/2;
7            long long sum=0;
8            for(auto x:nums){
9               sum += (x + mid - 1) / mid;
10            }
11            if(sum<=threshold){
12                ans=mid;
13               high=mid-1;
14            }
15            else low=mid+1;
16        }
17
18   return ans; }
19};