// Last updated: 9/23/2026, 11:33:51 PM
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        if (matrix.empty() || matrix[0].empty()) return false;
5    
6    int m = matrix.size();
7    int n = matrix[0].size();
8    
9    int low = 0;
10    int high = (m * n) - 1;
11    
12    while (low <= high) {
13        int mid = low + (high - low) / 2; // Prevents potential overflow
14        
15        // Map 1D index back to 2D row and column indexes
16        int row = mid / n;
17        int col = mid % n;
18        int val = matrix[row][col];
19        
20        if (val == target) {
21            return true;
22        } else if (val < target) {
23            low = mid + 1;
24        } else {
25            high = mid - 1;
26        }
27    }
28    
29    return false;
30    }
31};