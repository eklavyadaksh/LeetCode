// Last updated: 7/1/2026, 11:33:42 AM
1class Solution {
2public:
3    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
4        int p1=0,p2=0;
5        vector<int> v;
6        sort(nums1.begin(), nums1.end());
7sort(nums2.begin(), nums2.end());
8        while((p1<nums1.size()) && (p2<nums2.size())){
9            if(nums1[p1]==nums2[p2]){
10                if (v.empty() || v.back() != nums1[p1]) {
11                 v.push_back(nums1[p1]);
12}
13            
14              p1++;
15              p2++;}
16            else if(nums1[p1]>nums2[p2]){
17                p2++;
18            }
19            else{
20                p1++;
21            }
22
23
24        }
25        return v;
26    }
27};