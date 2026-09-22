// Last updated: 9/23/2026, 12:02:59 AM
1class Solution {
2public:
3    int mini(vector<int>& weights, int cap) {
4        int days = 1;
5        int load = 0;
6
7        for (auto x : weights) {
8            if (load + x > cap) {
9                days++;
10                load = x;
11            } else {
12                load += x;
13            }
14        }
15
16        return days;
17    }
18
19    int shipWithinDays(vector<int>& weights, int days) {
20        int sum = 0;
21
22        for (auto x : weights) {
23            sum += x;
24        }
25
26        int low = *max_element(weights.begin(), weights.end());
27        int high = sum;
28        int ans = high;
29
30        while (low <= high) {
31            int mid = low + (high - low) / 2;
32
33            int requiredDays = mini(weights, mid);
34
35            if (requiredDays <= days) {
36                ans = mid;
37                high = mid - 1;
38            } else {
39                low = mid + 1;
40            }
41        }
42
43        return ans;
44    }
45};