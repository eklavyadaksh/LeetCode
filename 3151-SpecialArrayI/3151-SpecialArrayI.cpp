// Last updated: 03/04/2026, 14:43:37
1class Solution {
2public:
3    bool isArraySpecial(vector<int>& nums) {
4        int count=0,left=0,right=1;
5        
6        if(nums.size()==1)
7         return true;
8         while(right<nums.size()){
9            if((nums[left]%2==0 && nums[right]%2!=0)||(nums[right]%2==0 && nums[left]%2!=0))
10           count++;
11            left++;
12            right++;
13
14         }
15        
16if(count==nums.size()-1)
17 return true;
18 else
19  return false;  }
20};