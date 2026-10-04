// Last updated: 10/4/2026, 11:16:50 PM
1class Solution {
2public:
3    int romanToInt(string s) {
4       int I=1, V=5, X=10, L=50, C=100, D=500, M=1000;
5       int sum=0,digit=0;
6
7       for(int i=0;i<s.length();i++){
8
9          if(i>0 && s[i-1]=='I' && s[i]=='V')
10           sum+=3;
11          else if(i>0 && s[i-1]=='I' && s[i]=='X')
12           sum+=8;
13          else if(i>0 && s[i-1]=='X' && s[i]=='L')
14           sum+=30;
15          else if(i>0 && s[i-1]=='X' && s[i]=='C')
16           sum+=80;
17          else if(i>0 && s[i-1]=='C' && s[i]=='D')
18           sum+=300;
19          else if(i>0 && s[i-1]=='C' && s[i]=='M')
20           sum+=800;
21
22          else if(s[i]=='I')
23           sum+=1;
24          else if(s[i]=='V')
25           sum+=5;
26          else if(s[i]=='X')
27           sum+=10;
28          else if(s[i]=='L')
29           sum+=50;
30          else if(s[i]=='C')
31           sum+=100;
32          else if(s[i]=='D')
33           sum+=500;
34          else
35           sum+=1000;
36       }
37
38       return sum;
39    }
40};