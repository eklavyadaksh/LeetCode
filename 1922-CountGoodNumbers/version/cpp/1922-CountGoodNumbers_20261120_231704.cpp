// Last updated: 11/20/2026, 11:17:04 PM
1class Solution {
2public:
3    long long MOD = 1e9 + 7;
4
5    long long modPow(long long a, long long b) {
6        long long ans = 1;
7
8        while (b > 0) {
9            if (b & 1)
10                ans = (ans * a) % MOD;
11
12            a = (a * a) % MOD;
13            b >>= 1;
14        }
15
16        return ans;
17    }
18
19    int countGoodNumbers(long long n) {
20        long long even = (n + 1) / 2;
21        long long odd = n / 2;
22
23        long long a = modPow(5, even);
24        long long b = modPow(4, odd);
25
26        return (a * b) % MOD;
27    }
28};