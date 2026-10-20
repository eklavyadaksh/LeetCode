// Last updated: 10/20/2026, 11:49:43 PM
1class Solution {
2public:
3    bool wordPattern(string pattern, string s) {
4        unordered_map<char, string> mp1;
5        unordered_map<string, char> mp2;
6
7        stringstream ss(s);
8        string word;
9        int i = 0;
10
11        while (ss >> word) {
12            if (i == pattern.size()) return false;
13
14            char ch = pattern[i];
15
16            if (mp1.count(ch) && mp1[ch] != word)
17                return false;
18
19            if (mp2.count(word) && mp2[word] != ch)
20                return false;
21
22            mp1[ch] = word;
23            mp2[word] = ch;
24
25            i++;
26        }
27
28        return i == pattern.size();
29    }
30};