// Last updated: 11/17/2026, 12:11:22 PM
1class Solution {
2public:
3vector<vector<int>> provideF(int ind,vector<int> &ds,vector<int>& nums,int n,  vector<vector<int>> a){
4      
5        if(ind==n){
6           a.push_back(ds);
7          return a;
8           
9        }
10        ds.push_back(nums[ind]);
11       a= provideF(ind+1,ds,nums,n,a);
12        ds.pop_back();
13
14         a= provideF(ind+1,ds,nums,n,a);
15
16    return a; }
17    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
18         int n=nums.size();
19         sort(nums.begin(), nums.end());
20        vector<int> ds;
21          vector<vector<int>> a;
22         vector<vector<int>> ans=  provideF(0,ds,nums,n,a);
23 set<vector<int>> st(ans.begin(), ans.end());
24       vector<vector<int> >ans1(st.begin(),st.end());
25       return ans1;
26    }
27};