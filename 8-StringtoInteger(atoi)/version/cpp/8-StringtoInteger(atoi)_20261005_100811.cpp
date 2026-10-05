// Last updated: 10/5/2026, 10:08:11 AM
1class Solution {
2public:
3    int myAtoi(string s) {
4        string ans;
5        int c = 0;
6
7        while(c < s.length() && s[c] == ' ')
8            c++;
9
10        for(; c < s.length(); c++){
11            if(s[c] >= 48 && s[c] <= 57)
12                ans.push_back(s[c]);
13
14            else if(s[c] == '-' && ans.empty())
15                ans.push_back(s[c]);
16
17            else if(s[c] == '+' && ans.empty())
18                ans.push_back(s[c]);
19
20            else
21                break;
22        }
23
24
25        if(ans.empty()) return 0;
26
27long long result = 0;
28int sign = 1;
29int i = 0;
30
31if(ans[0] == '-') sign = -1, i++;
32else if(ans[0] == '+') i++;
33
34for(; i < ans.size(); i++){
35    result = result * 10 + (ans[i] - '0');
36
37    if(sign == 1 && result > INT_MAX) return INT_MAX;
38    if(sign == -1 && result > (long long)INT_MAX + 1) return INT_MIN;
39}
40
41return result * sign;
42    }
43};