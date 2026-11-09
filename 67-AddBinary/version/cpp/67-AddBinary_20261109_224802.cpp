// Last updated: 11/9/2026, 10:48:02 PM
1class Solution {
2public:
3    string addBinary(string a, string b) {
4        int i = a.size() - 1;
5        int j = b.size() - 1;
6        int carry = 0;
7
8        string ans = "";
9
10        while (i >= 0 || j >= 0 || carry) {
11            int sum = carry;
12
13            if (i >= 0)
14                sum += a[i--] - '0';
15
16            if (j >= 0)
17                sum += b[j--] - '0';
18
19            ans += (sum % 2) + '0';
20            carry = sum / 2;
21        }
22
23        reverse(ans.begin(), ans.end());
24
25        return ans;
26    }
27};