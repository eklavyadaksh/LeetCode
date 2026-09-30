// Last updated: 9/30/2026, 4:11:01 PM
1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4     unordered_map<char,char> mp1,mp2;
5     int x=0,y=0;
6     while(x<s.length() && y<t.length()){
7        if(mp1.find(s[x])!=mp1.end()){
8            if(mp1[s[x]] != t[x])
9             return false;
10        }
11        if(mp2.find(t[y])!=mp2.end()){
12            if(mp2[t[y]] != s[y])
13             return false;
14        }
15        mp1[s[x]]=t[y];
16        mp2[t[y]]=s[x];
17        x++;
18        y++;
19     }
20    
21    return true; }
22};