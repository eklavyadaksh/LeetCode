// Last updated: 9/28/2026, 10:22:44 PM
1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4          int count1=0,count2=0;
5          string ans="";
6          int st=0;
7          for(int i=0;i<s.length();i++){
8            if(s[i]=='('){
9                count1++;
10                if(count1==1)st=i;
11             }
12             else{
13                count1--;
14             }
15             if(count1==0){
16                for (int j = st + 1; j < i; j++) {
17    ans.push_back(s[j]);
18}
19             }
20          }         
21     return ans;     }
22    
23};