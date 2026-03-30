// Last updated: 30/03/2026, 14:40:59
1class Solution {
2public:
3    string addStrings(string num1, string num2) {
4         
5        string sum = "";
6    int i = num1.length() - 1, j = num2.length() - 1, carry = 0;
7
8    while (i >= 0 || j >= 0 || carry) {
9        int d1 = (i >= 0) ? num1[i--] - '0' : 0;
10        int d2 = (j >= 0) ? num2[j--] - '0' : 0;
11        int currentSum = d1 + d2 + carry;
12        sum += to_string(currentSum % 10);
13        carry = currentSum / 10;
14    }
15    std::reverse(sum.begin(), sum.end());
16    return sum;
17    }
18};