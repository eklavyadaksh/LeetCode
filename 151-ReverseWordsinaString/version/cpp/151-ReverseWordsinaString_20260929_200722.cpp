// Last updated: 9/29/2026, 8:07:22 PM
1class Solution {
2public:
3    string reverseWords(string s) {
4        int n = s.length();
5        int i = n - 1;
6        string ans = "";
7
8        while (i >= 0) {
9            while (i >= 0 && s[i] == ' ')
10                i--;
11
12            if (i < 0)
13                break;
14
15            int j = i;
16
17            while (i >= 0 && s[i] != ' ')
18                i--;
19
20            if (!ans.empty())
21                ans += ' ';
22
23            ans += s.substr(i + 1, j - i);
24        }
25
26        return ans;
27    }
28};