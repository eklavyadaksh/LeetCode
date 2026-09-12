// Last updated: 9/12/2026, 2:11:48 PM
1class Solution {
2public:
3    int findKthPositive(vector<int>& vec, int k) {
4        int low=0,high=vec.size()-1;
5        while(low<=high){
6            int mid=low+(high-low)/2;
7            int missing=vec[mid]-(mid+1);
8            if(missing<k)low=mid+1;
9            else high=mid-1;
10
11        }
12        return high+1+k;
13        }
14};