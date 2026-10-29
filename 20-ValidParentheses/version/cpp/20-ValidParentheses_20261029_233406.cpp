// Last updated: 10/29/2026, 11:34:06 PM
1#include <string>
2#include <stack>
3
4class Solution {
5public:
6    bool isValid(std::string s) {
7        std::stack<char> open_brackets;
8        
9        for (char c : s) {
10            if (c == '(' || c == '{' || c == '[') {
11                open_brackets.push(c);
12            } else {
13                if (open_brackets.empty()) return false;
14                
15                char top = open_brackets.top();
16                if ((c == ')' && top != '(') ||
17                    (c == '}' && top != '{') ||
18                    (c == ']' && top != '[')) {
19                    return false;
20                }
21                
22                open_brackets.pop();
23            }
24        }
25        
26        return open_brackets.empty();
27    }
28};
29