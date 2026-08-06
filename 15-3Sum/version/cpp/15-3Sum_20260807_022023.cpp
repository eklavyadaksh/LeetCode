// Last updated: 8/7/2026, 2:20:23 AM
1class Solution {
2public:
3     vector<vector<int>> threeSum(vector<int>& nums) {
4       vector<vector<int>> ans;
5        sort(nums.begin(),nums.end());
6        for(int i=0;i<nums.size();i++){
7            if(i>0 && nums[i]==nums[i-1]) continue;
8                int j=i+1,k=nums.size()-1;
9              while(j<k){
10                
11                if(nums[i]+nums[j]+nums[k]==0){
12                  vector<int> temp={nums[i],nums[j],nums[k]};
13                  ans.push_back(temp);
14                    j++;
15                    k--;
16                    while( j<k && nums[j]==nums[j-1])j++;
17                    while( j<k && nums[k]==nums[k+1])k--;
18                }
19                else if((nums[i]+nums[j]+nums[k])>0)k--;
20                else j++;
21             }
22                
23        } 
24    return ans;}
25};