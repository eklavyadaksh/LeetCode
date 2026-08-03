// Last updated: 8/3/2026, 11:36:02 PM
1class Solution {
2public:
3    int subtractProductAndSum(int n) {
4        int sum=0,prod=1;
5        while(n!=0){
6        int a=n%10;
7        sum+=a;
8        prod*=a;
9        n=n/10;
10    }
11        
12   return prod-sum; }
13};