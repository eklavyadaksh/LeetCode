// Last updated: 06/04/2026, 17:09:21
1class Solution {
2public:
3    bool isPowerOfTwo(int n) {
4       for(int i=0;i<31;i++) {
5        int ans=pow(2,i);
6        if(ans==n)
7         return true;
8        
9       }
10  return false;  }
11};