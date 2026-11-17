// Last updated: 11/17/2026, 3:53:16 PM
1class Solution {
2public:
3void provideF(int ind, vector<int>& ds,
4           vector<int>& nums, int n, vector<vector<int>> &a,vector<vector<int>> &ans) {
5
6    ans.push_back(ds);
7
8    for (int i = ind; i < nums.size(); i++) {
9
10        if (i > ind && nums[i] == nums[i - 1])
11            continue;
12
13       ds.push_back(nums[i]);
14        provideF(i+1,ds,nums,n,a,ans);
15        ds.pop_back();
16        
17        
18    }
19    
20}
21
22    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
23         int n=nums.size();
24         sort(nums.begin(), nums.end());
25        vector<int> ds;
26          vector<vector<int>> a,ans;
27         provideF(0,ds,nums,n,a,ans);
28       return ans;
29    }
30};