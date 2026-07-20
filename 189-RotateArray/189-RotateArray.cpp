// Last updated: 7/20/2026, 7:07:54 PM
1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int n=nums.size();
5        k=k%n;
6        reverse(nums.begin(),nums.begin()+n-k);
7        reverse(nums.begin()+n-k,nums.begin()+n);
8        reverse(nums.begin(),nums.begin()+n);
9    }
10};