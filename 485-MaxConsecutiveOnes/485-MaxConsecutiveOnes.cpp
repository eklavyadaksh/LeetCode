// Last updated: 7/21/2026, 7:40:10 PM
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int count=0;
5        int maxcount=0;
6        for(int i=0;i<nums.size();i++){
7            if(nums[i]==0){
8                maxcount=max(maxcount,count);
9                count=0;
10            }
11            else{
12                count++;
13            }
14        }
15        maxcount=max(maxcount,count);
16        return maxcount;
17    }
18};