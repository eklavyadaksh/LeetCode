// Last updated: 8/19/2026, 10:35:54 PM
1class Solution {
2public:
3    int getCommon(vector<int>& nums1, vector<int>& nums2) {
4        int s = 0, e = 0;
5        while(s<nums1.size() && e<nums2.size()){
6            if(nums1[s] == nums2[e])return nums1[s];
7            else if(nums1[s]<nums2[e]) s++;
8            else e++;
9        }
10        return -1;
11    }
12};