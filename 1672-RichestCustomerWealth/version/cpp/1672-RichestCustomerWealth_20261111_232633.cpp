// Last updated: 11/11/2026, 11:26:33 PM
1
2class Solution {
3public:
4    int maximumWealth(vector<vector<int>>& accounts) {
5        int ans = 0;
6
7        for (int i = 0; i < accounts.size(); i++) {
8            int sum = 0;
9
10            for (int j = 0; j < accounts[i].size(); j++) {
11                sum += accounts[i][j];
12            }
13
14            ans = max(ans, sum);
15        }
16
17        return ans;
18    }
19};
20