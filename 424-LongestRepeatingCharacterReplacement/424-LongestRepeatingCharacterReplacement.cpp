// Last updated: 4/12/2026, 11:45:29 AM
1class Solution {
2public:
3    int characterReplacement(string s, int k) {
4        int left=0;
5        int maxfreq=0;
6        
7        int maxlen=0;
8        unordered_map<char,int> mp;
9        for(int right=0;right<s.length();right++){
10            
11            char c=s[right];
12            mp[c]++;
13            maxfreq = max(maxfreq, mp[c]);
14            int window_size=right-left+1;
15            if(window_size - maxfreq <=k){
16             
17             maxlen = max(maxlen, window_size);
18            }
19             else{
20                mp[s[left]]--;
21                 left++;
22             }
23          
24        }
25         return maxlen; }
26
27};