// Last updated: 8/27/2026, 11:59:15 PM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        map<int,int> mp;
5        int more;
6        
7        for(int i=0;i<nums.size();i++){
8            int num=nums[i];
9            
10             more=target-num;
11            if(mp.find(more)!=mp.end()){
12                return {mp[more],i};
13            }
14           mp[num]=i;
15        }
16    
17   return {-1,-1};
18    }
19};