// Last updated: 9/24/2026, 3:00:29 PM
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        if (matrix.empty() || matrix[0].empty()) return false;
5    
6    int m = matrix.size();
7    int n = matrix[0].size();
8    int row = 0;
9        int col = n - 1;
10        
11        while (row < m && col >= 0) {
12            int val = matrix[row][col];
13            
14            if (val == target) {
15                return true;
16            } else if (val > target) {
17                col--; 
18            } else {
19                row++;
20            }
21        }
22        
23        return false;}
24};