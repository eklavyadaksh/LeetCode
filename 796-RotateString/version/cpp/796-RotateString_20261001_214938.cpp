// Last updated: 10/1/2026, 9:49:38 PM
1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4        int n=s.length()-1;
5        if(s.length()!=goal.length())return false;
6        
7       for (int j = 0; j <= n; j++) {
8    int last = s[n];
9
10    for (int i = n; i > 0; i--) {
11        s[i] = s[i - 1];
12    }
13
14    s[0] = last;
15
16    if (s == goal)
17        return true;
18}
19    return false;}
20};