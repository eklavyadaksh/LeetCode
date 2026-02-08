// Last updated: 08/02/2026, 14:30:31
1class Solution {
2public:
3    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
4        if(k<=1) return 0;
5        int left=0,count=0;
6        long long product=1;
7        for(int right=0;right<nums.size();right++){
8            product*=nums[right];
9            while(product>=k){
10              product/=nums[left];
11              left++;
12              }
13         count+=right-left+1;
14
15        }
16        return count;
17    }
18};