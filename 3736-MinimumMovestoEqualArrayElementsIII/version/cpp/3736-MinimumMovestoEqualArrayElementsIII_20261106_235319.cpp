// Last updated: 11/6/2026, 11:53:19 PM
1class Solution {
2public:
3    int minMoves(vector<int>& nums) {
4        int max_val = nums[0];
5        int total_moves = 0;
6        for (int num : nums) {
7            max_val = max(max_val, num);
8        }
9        for (int num : nums) {
10            total_moves += (max_val - num);
11        }
12        
13        return total_moves;
14    }
15};