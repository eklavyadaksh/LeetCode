// Last updated: 9/17/2026, 9:09:52 PM
1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
4        int m=a.size();
5        int n=b.size();
6        vector<int> result(m+n);
7     std::merge(a.begin(), a.end(), b.begin(), b.end(), result.begin());
8     sort(result.begin(),result.end());
9     int l=result.size();
10      double ans;
11     if(l%2==0)ans=(result[l/2]+result[(l/2)-1])/2.0;
12     else ans= result[(l/2)];
13
14   return ans; }
15};