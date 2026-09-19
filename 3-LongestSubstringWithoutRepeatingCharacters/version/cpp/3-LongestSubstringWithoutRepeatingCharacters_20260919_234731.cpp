// Last updated: 9/19/2026, 11:47:31 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        unordered_map<char,int> mp;
5         int left=0,maxlen=0;
6        for(int right=0;right<s.length();right++){
7          if(mp.find(s[right])!=mp.end()){
8            left = max(left, mp[s[right]]+1);
9          }
10          mp[s[right]]=right;
11          maxlen=max(maxlen,right-left+1);
12        }
13   return maxlen; 
14   }
15    
16};