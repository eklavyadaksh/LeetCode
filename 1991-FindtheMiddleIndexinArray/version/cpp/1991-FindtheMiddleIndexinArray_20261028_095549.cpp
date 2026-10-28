// Last updated: 10/28/2026, 9:55:49 AM
1class Solution {
2public:
3    int findMiddleIndex(vector<int>& nums) {
4       int totalsum = accumulate(nums.begin(), nums.end(), 0);
5     int  lsum=0;
6      
7
8    for(int p=0;p<nums.size();p++){
9        int rsum = totalsum-lsum-nums[p];
10
11        if(lsum==rsum)
12          return p;
13    
14          lsum+=nums[p];
15    
16          
17
18      }
19   return -1; 
20    }
21};