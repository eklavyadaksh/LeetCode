// Last updated: 7/1/2026, 11:35:59 AM
1class Solution {
2public:
3    
4    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
5
6    unordered_set<int> s(nums1.begin(), nums1.end());
7
8    vector<int> ans;
9
10    for(int x : nums2){
11
12        if(s.count(x)){
13            ans.push_back(x);
14            s.erase(x);      // avoid duplicates
15        }
16    }
17
18    return ans;
19}
20};
21