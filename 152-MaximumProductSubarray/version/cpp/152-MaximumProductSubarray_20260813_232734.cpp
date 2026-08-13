// Last updated: 8/13/2026, 11:27:34 PM
1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int pre=1,suff=1,maxi=INT_MIN;
5        for(int i=0;i<nums.size();i++){
6            if(pre==0)pre=1;
7            if(suff==0)suff=1;
8            pre*=nums[i];
9            suff*=nums[nums.size()-i-1];
10            maxi=max(maxi,max(pre,suff));
11
12        } 
13        return maxi;}
14};