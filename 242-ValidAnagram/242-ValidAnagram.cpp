// Last updated: 03/02/2026, 17:12:43
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if(s.length()!=t.length())
5         return false;
6         unordered_map<char,int> mp;
7        for(char c:s){
8            mp[c]++;
9
10        }
11        for(char c:t){
12            mp[c]--;
13            if(mp[c]<0)
14             return false;
15
16        }
17
18
19         return true;
20        
21        
22    }
23};