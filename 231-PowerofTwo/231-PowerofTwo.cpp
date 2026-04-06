// Last updated: 06/04/2026, 17:34:25
1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int n=nums.size();
5        vector<int> temp(n);
6        for(int i=0;i<n;i++){
7        
8            temp[(i+k)%n]=nums[i];
9        }
10        for(int i=0;i<n;i++){
11            nums[i]=temp[i];
12        }
13    }
14};