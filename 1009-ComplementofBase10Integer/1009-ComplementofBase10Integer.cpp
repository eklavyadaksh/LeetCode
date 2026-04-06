// Last updated: 06/04/2026, 16:58:11
1class Solution {
2public:
3    int bitwiseComplement(int n) {
4       int m=n;
5       int mask=0;
6       if(m==0)
7        return 1;
8       while(m!=0){
9        mask=(mask << 1)|1;
10        m=m >> 1;
11       }
12     int ans=~n&mask;
13   return ans; }
14};