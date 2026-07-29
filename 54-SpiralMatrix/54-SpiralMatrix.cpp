// Last updated: 7/29/2026, 9:59:36 PM
1class Solution {
2public:
3
4    vector<int> spiralOrder(vector<vector<int>>& matrix) {
5        vector<int> v;
6        
7        if (matrix.empty() || matrix[0].empty()) {
8            return v;
9        }
10
11        int top = 0;
12        int bottom = matrix.size() - 1;
13        int left = 0;
14        int right = matrix[0].size() - 1;
15
16        while (top <= bottom && left <= right) {
17            for (int j = left; j <= right; j++) {
18                v.push_back(matrix[top][j]);
19            }
20            top++;
21
22            for (int i = top; i <= bottom; i++) {
23                v.push_back(matrix[i][right]);
24            }
25            right--;
26
27            if (top <= bottom) {
28                for (int j = right; j >= left; j--) {
29                    v.push_back(matrix[bottom][j]);
30                }
31                bottom--;
32            }
33
34            if (left <= right) {
35                for (int i = bottom; i >= top; i--) {
36                    v.push_back(matrix[i][left]);
37                }
38                left++;
39            }
40        }
41        
42        return v;
43    }
44};
45