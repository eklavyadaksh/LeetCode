// Last updated: 7/1/2026, 12:14:24 PM
1class Solution {
2public:
3    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
4        int p1=0,p2=0;
5         vector<int> v;
6         sort(nums1.begin(),nums1.end());
7         sort(nums2.begin(),nums2.end());
8         while(p1<nums1.size() && p2<nums2.size()){
9            if(nums1[p1]==nums2[p2]){
10                v.push_back(nums1[p1]);
11                p1++;
12                p2++;
13            }
14            else if(nums1[p1]>nums2[p2])
15               p2++;
16               else
17                p1++;
18
19              
20         }
21         return v;
22    }
23};