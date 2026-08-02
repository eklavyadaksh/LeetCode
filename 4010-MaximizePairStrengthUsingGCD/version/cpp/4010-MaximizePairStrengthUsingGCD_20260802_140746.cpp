// Last updated: 8/2/2026, 2:07:46 PM
1class Solution {
2public:
3    int countRatioSubarrays(vector<int>& nums, int a, int b) {
4        int val=a/b,count=0;
5        for(int i=0;i<nums.size();i++){
6            int odd=0,even=0;
7            for(int j=i;j<nums.size();j++){
8               
9                    if(nums[j]%2==0)even++;
10                    else odd++;
11             
12                
13                if(odd!=0){
14                int newval=even/odd;
15                if(odd>0 &&  1LL * even * b <= 1LL * odd * a)count++;
16                }
17            }
18        }
19
20   return count; }
21};