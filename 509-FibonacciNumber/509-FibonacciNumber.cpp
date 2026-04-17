// Last updated: 4/17/2026, 10:22:56 PM
1class Solution {
2public:
3    int fib(int n) {
4        if(n==0)
5        return 0;
6        if(n==1)
7         return 1;
8        return fib(n-1)+ fib(n-2);
9    }
10};