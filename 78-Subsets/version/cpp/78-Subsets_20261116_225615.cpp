// Last updated: 11/16/2026, 10:56:15 PM
1class Solution {
2public:
3     vector<vector<int>> provideF(int ind,vector<int> &ds,vector<int>& nums,int n,  vector<vector<int>> a){
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
17    vector<vector<int>> subsets(vector<int>& nums) {
18        int n=nums.size();
19        vector<int> ds;
20          vector<vector<int>> a;
21         vector<vector<int>> ans=  provideF(0,ds,nums,n,a);
22       return ans;
23    }
24};