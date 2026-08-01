// Last updated: 8/1/2026, 11:46:48 AM
1class Solution {
2public:
3    int tribonacci(int n) {
4        int next;
5        if(n==0)return 0;
6        if(n==1)return 1;
7        if(n==2)return 1;
8        int a=0,b=1,c=1;
9        for(int i=3;i<n+1;i++){
10            next=a+b+c;
11            a=b;
12            b=c;
13            c=next;
14        }
15   return next; }
16};