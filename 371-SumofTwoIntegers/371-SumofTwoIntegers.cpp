// Last updated: 4/12/2026, 2:39:07 PM
1class Solution {
2public:
3    int getSum(int a, int b) {
4         while (b != 0) {
5    
6        int carry = a & b;
7
8        
9        a = a ^ b;
10
11        
12        b = carry << 1;
13    }
14    return a;
15    }
16};