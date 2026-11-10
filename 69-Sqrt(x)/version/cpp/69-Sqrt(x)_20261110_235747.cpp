// Last updated: 11/10/2026, 11:57:47 PM
1class Solution {
2public:
3    int mySqrt(int x) {
4        int low = 0, high = x;
5        int ans = 0;
6
7        while (low <= high) {
8            long long mid = low + (high - low) / 2;
9
10            if (mid * mid == x) {
11                return mid;
12            }
13            else if (mid * mid < x) {
14                ans = mid;
15                low = mid + 1;
16            }
17            else {
18                high = mid - 1;
19            }
20        }
21
22        return ans;
23    }
24};