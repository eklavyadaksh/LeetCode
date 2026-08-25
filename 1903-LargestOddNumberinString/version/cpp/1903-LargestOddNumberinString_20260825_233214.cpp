// Last updated: 8/25/2026, 11:32:14 PM
1class Solution {
2public:
3    string largestOddNumber(string num) {
4        for(int i = num.size()-1 ; i>=0;i--){
5            if((num[i] - '0')%2 != 0){
6                return num.substr(0,i+1);
7            }
8        }
9        return "";
10
11        
12    }
13};