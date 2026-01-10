// Last updated: 10/01/2026, 11:49:12
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int maxCount = 0;
5        int count = 0;
6        for (int i = 0; i < nums.size(); i++) {
7            if (nums[i] == 0) {
8                maxCount = max(count, maxCount);
9                count = 0;
10            } else {
11                count++;
12            }
13        }
14        maxCount = max(count, maxCount);
15        return maxCount;
16    }
17};