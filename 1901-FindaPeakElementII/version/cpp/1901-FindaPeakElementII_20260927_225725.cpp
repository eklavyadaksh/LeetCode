// Last updated: 9/27/2026, 10:57:25 PM
1class Solution {
2public:
3    vector<int> findPeakGrid(vector<vector<int>>& matrix) {
4        if (matrix.empty() || matrix[0].empty()) return {-1, -1};
5
6        int m = matrix.size();
7        int n = matrix[0].size();
8
9        for (int c = 0; c < n; c++) {
10            int low = 0;
11            int high = m - 1;
12
13            while (low < high) {
14                int mid = low + (high - low) / 2;
15
16                if (matrix[mid][c] < matrix[mid + 1][c])
17                    low = mid + 1;
18                else
19                    high = mid;
20            }
21
22            int row = low;
23
24            if ((c == 0 || matrix[row][c] > matrix[row][c - 1]) &&
25                (c == n - 1 || matrix[row][c] > matrix[row][c + 1])) {
26                return {row, c};
27            }
28        }
29
30        return {-1, -1};
31    }
32};