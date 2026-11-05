// Last updated: 11/5/2026, 12:40:19 PM
1#include <climits>
2class Solution {
3public:
4    int myAtoi(string s) {
5   long long ans=0;
6      
7        int sign = 1;
8        bool started=false;
9        for(char x:s){
10            if((x=='-' || x=='+') && !started) {
11    sign = (x=='-') ? -1 : 1;
12    started = true;
13    continue;
14}
15             else   if(x == ' ' && !started) continue;
16          
17           else  if(x>=48 && x<=57){
18            started = true;
19               
20                long long limit = (sign == 1) ? INT_MAX : -(long long)INT_MIN;
21                if(ans > (limit - (x - '0')) / 10) {
22    return sign == 1 ? INT_MAX : INT_MIN;
23}
24
25
26                ans = ans * 10 + (x - '0');
27          
28
29              
30          
31            }
32            else{
33                break;
34            }
35            
36            
37    
38          
39    }
40       
41   return ans * sign; }
42};