// Last updated: 11/14/2026, 10:11:11 PM
1class Solution {
2public:
3    int numIdenticalPairs(vector<int>& nums) {
4        int count = 0;
5
6        for (int i = 0; i < nums.size(); i++) {
7            for (int j = i + 1; j < nums.size(); j++) {
8                if (nums[i] == nums[j]) {
9                    count++;
10                }
11            }
12        }
13
14        return count;
15    }
16};