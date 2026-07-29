// Last updated: 7/29/2026, 7:15:38 PM
1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4           int n=matrix.size();
5        vector<vector<int>> result(n, vector<int>(n));
6  for (size_t i = 0; i < n; ++i) {
7        // Start j at i + 1 to only traverse the upper triangle
8        for (size_t j = i + 1; j < n; ++j) {
9            std::swap(matrix[i][j], matrix[j][i]);
10        }
11    }
12
13        for(int i=0;i<matrix.size();i++){
14            reverse(matrix[i].begin(), matrix[i].end());
15    }
16}
17};