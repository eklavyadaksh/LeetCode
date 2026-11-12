// Last updated: 11/12/2026, 11:37:22 PM
1class Solution {
2public:
3    double myPow(double x, int n) {
4        long long power = n;
5        bool negative = power < 0;
6
7        if (negative) power = -power;
8
9        double ans = 1.0;
10
11        while (power > 0) {
12            if (power & 1)
13                ans *= x;
14
15            x *= x;
16            power >>= 1;
17        }
18
19        return negative ? 1.0 / ans : ans;
20    }
21};