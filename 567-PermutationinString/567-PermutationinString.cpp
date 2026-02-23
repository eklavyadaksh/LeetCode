// Last updated: 23/02/2026, 19:28:40
1class Solution {
2public:
3    bool checkInclusion(string s1, string s2) {
4        unordered_map<char,int> mp,window;
5        for(auto x: s1){
6            mp[x]++;
7        }
8        if(s1.length()>s2.length())
9          return false;
10      int left=0;
11      int right=s1.length();
12      for(int i=0;i<right;i++){
13          window[s2[i]]++;
14      }
15      if(mp==window){
16            return true;
17        }
18      
19      for(int i=right;i<s2.length();i++){
20        window[s2[i]]++;
21        window[s2[i-right]]--;
22        char ch = s2[i - right];
23        if (window[ch] == 0)
24           window.erase(ch);
25        
26      
27        if(mp==window){
28            return true;
29        }
30        
31      }
32
33    return false;}
34};