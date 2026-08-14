// Last updated: 8/14/2026, 10:45:20 PM
1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        
5          int m=nums.size();
6           if(target<=nums[0])return 0;
7        for(int i=0;i<nums.size()-1;i++){
8             
9              if( target<=nums[i+1])return i+1;
10       
11          
12          
13        }
14 return m ; }
15};