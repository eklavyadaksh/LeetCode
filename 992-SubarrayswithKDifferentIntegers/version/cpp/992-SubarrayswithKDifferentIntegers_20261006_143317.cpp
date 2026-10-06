// Last updated: 10/6/2026, 2:33:17 PM
1class Solution {
2public:
3   int atmost(int k,vector<int>& nums){
4             int left=0,right=0;
5              unordered_map<int,int> mp;
6              int ans=0;
7                     int distinct=0;
8             while(right<nums.size()){
9               
10         
11                  
12                if(mp[nums[right]]==0)distinct++;
13
14                   mp[nums[right]]++;
15           
16                while(distinct>k){
17                   
18                    mp[nums[left]]--;
19
20                    if(mp[nums[left]]==0)distinct--;
21                    
22                    left++;
23                   
24                }
25                   ans+=right-left+1;
26                   right++;
27             }
28             
29  return ans; }
30    int subarraysWithKDistinct(vector<int>& nums, int k) {
31       return atmost(k,nums)-atmost(k-1,nums);
32    }
33};