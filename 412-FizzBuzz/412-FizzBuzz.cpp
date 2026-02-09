// Last updated: 09/02/2026, 21:52:57
1class Solution {
2public:
3    vector<string> fizzBuzz(int n) {
4        vector<string> ans(n);
5        
6
7        for(int i=0;i<n;i++){
8            int num=i+1;
9            if((num%3==0 )&& (num%5==0))
10              ans[i]="FizzBuzz";
11             else if(num%3==0)
12             ans[i] = "Fizz";
13            else  if(num%5==0)
14             ans[i]= "Buzz";
15             else
16             ans[i]=to_string(i+1);
17
18
19        }
20        return ans;
21        
22    }
23};