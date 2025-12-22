// Last updated: 22/12/2025, 20:53:33
1class Solution {
2public:
3    vector<int> shuffle(vector<int>& nums, int n) {
4        vector<int> arr(2*n);
5        for(int i=0;i<n;i++){
6            arr[2 * i]     = nums[i];       
7            arr[2 * i + 1] = nums[i + n];
8            
9        }
10
11        return arr;
12    }
13};