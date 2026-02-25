// Last updated: 25/02/2026, 11:25:36
1class Solution {
2public:
3    int jump(vector<int>& nums) {
4        int n = nums.size();
5        if (n <= 1)
6            return 0;
7
8        vector<bool> visited(n, false);
9        queue<int> q;
10
11        q.push(0);
12        visited[0] = true;
13
14        int jumps = 0;
15
16        while (!q.empty()) {
17            int size = q.size();
18            jumps++;
19
20            while (size--) {
21                int index = q.front();
22                q.pop();
23
24                for (int step = 1; step <= nums[index]; step++) {
25                    int nextIndex = index + step;
26
27                    if (nextIndex >= n - 1)
28                        return jumps;
29
30                    if (!visited[nextIndex]) {
31                        visited[nextIndex] = true;
32                        q.push(nextIndex);
33                    }
34                }
35            }
36        }
37
38        return -1;
39    }
40};
41