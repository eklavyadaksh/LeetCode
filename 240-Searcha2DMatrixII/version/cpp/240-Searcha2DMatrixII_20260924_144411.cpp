// Last updated: 9/24/2026, 2:44:11 PM
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        if (matrix.empty() || matrix[0].empty()) return false;
5    
6    int m = matrix.size();
7    int n = matrix[0].size();
8    for(int i=0;i<m;i++){
9    int low = 0;
10    int high = n - 1;
11    
12    while (low <= high) {
13        int mid = low + (high - low) / 2; 
14        
15
16        int row = i;
17        int col = mid % n;
18        int val = matrix[row][col];
19
20        
21        if (val == target) {
22            return true;
23        } else if (val < target) {
24            low = mid + 1;
25        } else {
26            high = mid - 1;
27        }
28    }
29   
30    }
31    
32    return false;}
33};