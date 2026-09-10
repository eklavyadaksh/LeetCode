// Last updated: 9/10/2026, 7:18:24 AM
1class Solution {
2public:
3    int findKthPositive(vector<int>& vec, int k) {
4        if(k<vec[0])return k;
5       for(auto x:vec){
6        if(x<=k)k++;
7        else return k;
8       }
9   return k; }
10};