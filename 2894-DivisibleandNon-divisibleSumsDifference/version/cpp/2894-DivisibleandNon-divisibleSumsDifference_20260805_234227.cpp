// Last updated: 8/5/2026, 11:42:27 PM
1class Solution {
2public:
3    int differenceOfSums(int n, int m) {
4        int num1=0,num2=0;
5        for(int i=0;i<n+1;i++){
6            if(i%m!=0)
7             num1+=i;
8        }
9        for(int j=0;j<n+1;j++){
10            if(j%m==0)
11             num2+=j;
12        }
13        
14    return num1-num2;}
15};