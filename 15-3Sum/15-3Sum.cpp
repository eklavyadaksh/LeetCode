// Last updated: 18/02/2026, 19:46:55
1class Solution {
2public:
3     vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>> v;
5        sort(nums.begin(),nums.end());
6        for(int i=0;i<nums.size()-2;i++){
7            int left=i+1;
8          int right=nums.size()-1;
9         
10          if(i > 0 && nums[i] == nums[i-1])
11           continue;
12        while(left<right){ 
13           int sum=nums[i]+nums[left]+nums[right];
14          if(sum == 0){
15            v.push_back({nums[i],nums[left],nums[right]});
16            left++;
17            right--;
18            while(left < right && nums[left] == nums[left-1])
19           left++;
20           while(left < right && nums[right] == nums[right+1])
21            right--;
22
23
24            }
25          else if(sum>0)
26            right--;
27          else
28            left++;
29
30        }
31     }
32     return v;   
33    }
34};