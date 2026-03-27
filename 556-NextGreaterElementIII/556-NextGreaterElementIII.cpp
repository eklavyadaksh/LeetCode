// Last updated: 27/03/2026, 23:45:35
1class Solution {
2public:
3    int nextGreaterElement(int n) {
4        string s = to_string(n);
5
6        int i = s.size() - 2;
7
8        // step 1: find first decreasing element
9        while (i >= 0 && s[i] >= s[i + 1]) i--;
10
11        if (i < 0) return -1;
12
13        // step 2: find just larger element to the right
14        int j = s.size() - 1;
15        while (s[j] <= s[i]) j--;
16
17        // step 3: swap
18        swap(s[i], s[j]);
19
20        // step 4: reverse suffix
21        reverse(s.begin() + i + 1, s.end());
22
23        // step 5: convert and check overflow
24        long long ans = stoll(s);
25        return (ans > INT_MAX) ? -1 : ans;
26    }
27};