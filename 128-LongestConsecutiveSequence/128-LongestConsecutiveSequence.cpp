// Last updated: 7/27/2026, 11:08:39 PM
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4        unordered_set<int> st(nums.begin(), nums.end());
5
6        int longest = 0;
7
8        for (int num : st) {
9            // Start only if this is the first element of a sequence
10            if (!st.count(num - 1)) {
11                int curr = num;
12                int len = 1;
13
14                while (st.count(curr + 1)) {
15                    curr++;
16                    len++;
17                }
18
19                longest = max(longest, len);
20            }
21        }
22
23        return longest;
24    }
25};