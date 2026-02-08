// Last updated: 08/02/2026, 15:39:59
1class Solution {
2public:
3    string minWindow(string s, string t) {
4        if(s.empty()|| t.empty()) return "";
5        
6        unordered_map<char,int> need,window;
7        int formed=0,left=0,right=0,start=0;
8        int minlen=INT_MAX;
9        for(char c:t){
10          need[c]++;
11          }
12
13        int required=need.size();
14        while(right<s.size()){
15            char c=s[right];
16            window[c]++;
17            if(need.count(c) && window[c]== need[c])
18               formed++;
19
20               while(left<= right && required==formed){
21                  if(right-left+1<minlen){
22                    minlen=right-left+1;
23                    start=left;
24                  }
25                  char d=s[left];
26                  window[d]--;
27                  if(need.count(d) && window[d]<need[d]){
28                        formed--;
29                       
30               }
31                left++;
32               
33               }
34
35               right++;
36
37            
38        }
39        return minlen == INT_MAX ? "" : s.substr(start, minlen);
40        
41    }
42   
43};