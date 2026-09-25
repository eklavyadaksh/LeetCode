// Last updated: 9/25/2026, 11:48:08 PM
1class Solution {
2public:
3    int reverse(int x) {
4        long long int rev=0;
5        long long int n = 1;
6        while(x!=0){
7            n=x%10;
8            rev=rev*10+n;
9            x=x/10;
10        }
11        
12        if(rev>pow(2,31)-1 || rev<pow(-2,31))
13            return 0;
14        else
15        return rev;
16    }
17};