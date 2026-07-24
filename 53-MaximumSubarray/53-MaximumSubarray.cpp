// Last updated: 7/24/2026, 2:24:05 PM
1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int max=INT_MIN;
5        int sum=0;
6        for(int i=0;i<nums.size();i++){
7            sum+=nums[i];
8            if(sum>max){
9                max=sum;
10        }
11            if(sum<0){
12                sum=0;
13                
14            }
15            
16        }
17   return max;}
18};