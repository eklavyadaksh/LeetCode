// Last updated: 10/7/2026, 3:24:08 PM
1class Solution {
2public:
3    string longestPalindrome(string s) {
4        string ans="";
5        bool ispalindrome=false;
6        for(int i=0;i<s.length();i++){
7               for(int j=i;j<s.length();j++){
8                int left=i;
9                int right=j;
10                while(left<=right){
11                    if(s[left]!=s[right])break;
12
13                    left++;
14                    right--;
15                    ispalindrome=true;
16                    
17                }
18                if (left > right && j - i + 1 > ans.length())
19                 ans = s.substr(i, j - i + 1);
20               }
21        }
22
23         return ans; }
24};