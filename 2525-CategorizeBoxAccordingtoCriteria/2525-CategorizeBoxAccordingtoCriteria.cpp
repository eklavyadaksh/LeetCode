// Last updated: 09/02/2026, 22:30:28
1class Solution {
2public:
3    string categorizeBox(int length, int width, int height, int mass) {
4
5        long long volume = 1LL * length * width * height;
6
7        bool bulky = (length >= 10000 ||
8                      width  >= 10000 ||
9                      height >= 10000 ||
10                      volume >= 1000000000LL);
11
12        bool heavy = (mass >= 100);
13
14        if (bulky && heavy) return "Both";
15        if (bulky)          return "Bulky";
16        if (heavy)          return "Heavy";
17        return "Neither";
18    }
19};
20