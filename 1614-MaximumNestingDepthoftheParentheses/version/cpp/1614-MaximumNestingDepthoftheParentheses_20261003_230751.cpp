// Last updated: 10/3/2026, 11:07:51 PM
1class Solution {
2public:
3    int maxDepth(string s) {
4        int count=0,maxDepth=0;
5        for(char c:s){
6            if(c=='('){
7                count++;
8                maxDepth = max(maxDepth, count);
9            }
10            if(c==')')count--;
11        }
12   return maxDepth; }
13};