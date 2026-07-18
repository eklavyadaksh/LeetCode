// Last updated: 7/18/2026, 11:27:35 AM
1class Solution {
2public:
3    int thirdMax(vector<int>& nums) {
4        long first = LONG_MIN;
5        long second = LONG_MIN;
6        long third = LONG_MIN;
7
8        for (int x : nums) {
9
10            if (x == first || x == second || x == third)
11                continue;
12
13            if (x > first) {
14                third = second;
15                second = first;
16                first = x;
17            }
18            else if (x > second) {
19                third = second;
20                second = x;
21            }
22            else if (x > third) {
23                third = x;
24            }
25        }
26
27        return third == LONG_MIN ? first : third;
28    }
29};