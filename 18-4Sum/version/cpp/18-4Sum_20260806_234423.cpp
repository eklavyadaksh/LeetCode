// Last updated: 8/6/2026, 11:44:23 PM
1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4          set<vector<int>> st;
5          for(int i=0;i<nums.size();i++){
6            for(int j=i+1;j<nums.size();j++){
7                unordered_set<long long> hashset;
8                for(int k=j+1;k<nums.size();k++){
9                    long long sum=nums[i]+nums[j];
10                    sum+=nums[k];
11                    long long fourth= target - (sum);
12                    if(hashset.find(fourth)!=hashset.end()){
13                        vector<int> temp={nums[i],nums[j],nums[k],(int)fourth};
14                        sort(temp.begin(),temp.end());
15                        st.insert(temp);
16                    }
17                    hashset.insert(nums[k]);
18
19                }
20            }
21          }
22vector<vector<int>> ans(st.begin(),st.end());
23   return ans; }
24};