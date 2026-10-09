// Last updated: 10/9/2026, 11:35:56 PM
1class Solution {
2public:
3    int beautySum(string s) {
4        int sum = 0;
5
6        for(int i = 0; i < s.length(); i++) {
7            vector<int> freq(26, 0);
8
9            for(int j = i; j < s.length(); j++) {
10                freq[s[j] - 'a']++;
11
12                int a = *max_element(freq.begin(), freq.end());
13
14                int b = INT_MAX;
15                for(int k = 0; k < 26; k++) {
16                    if(freq[k] > 0) {
17                        b = min(b, freq[k]);
18                    }
19                }
20
21                sum += a - b;
22            }
23        }
24
25        return sum;
26    }
27};