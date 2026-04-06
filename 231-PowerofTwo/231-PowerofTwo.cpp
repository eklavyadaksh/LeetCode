// Last updated: 06/04/2026, 18:59:22
1class Solution {
2public:
3    bool isPalindrome(string s) {
4       
5       int j = 0;
6for(int i = 0; i < s.length(); i++){
7    if(isalnum(s[i])){
8        s[j++] = s[i];
9    }
10}
11s.resize(j);
12       for(int i = 0; i < s.length(); i++){
13    s[i] = tolower(s[i]);
14}
15       string v = s; 
16       reverse(v.begin(), v.end());
17     
18       if(v==s )
19        return true;
20
21
22
23
24
25        return false; }
26
27        
28
29    
30};