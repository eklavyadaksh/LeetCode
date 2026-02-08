// Last updated: 08/02/2026, 13:52:55
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        unordered_set<char> st;
5         int left=0,maxlen=0;
6        for(int right=0;right<s.length();right++){
7          while(st.find(s[right])!=st.end()){
8            st.erase(s[left]);
9            left++;
10          }
11          st.insert(s[right]);
12          maxlen=max(maxlen,right-left+1);
13        }
14   return maxlen; }
15    
16};