// Last updated: 4/12/2026, 2:01:07 PM
1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        unordered_map<int,int> mp;
5            vector<int> ans;
6            for(auto x:nums)mp[x]++;
7            for(int i=0;i<nums.size();i++){
8               
9                
10                if (!mp.contains(i+1))
11                  ans.push_back(i+1);
12
13            }return ans;
14    }
15};