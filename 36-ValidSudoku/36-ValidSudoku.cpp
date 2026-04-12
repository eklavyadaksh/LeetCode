// Last updated: 4/12/2026, 10:43:39 AM
1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4       unordered_map<int, unordered_map<char,int>> rows;
5      unordered_map<int, unordered_map<char,int>> cols;
6     unordered_map<int, unordered_map<char,int>> boxes; 
7     for (int i = 0; i < 9; ++i) {
8    for (int j = 0; j < 9; ++j) {
9       char c = board[i][j];
10if (c == '.') continue;
11
12int box = (i / 3) * 3 + (j / 3);
13
14
15if (rows[i][c] > 0) return false;
16if (cols[j][c] > 0) return false;
17if (boxes[box][c] > 0) return false;
18
19rows[i][c]++;
20cols[j][c]++;
21boxes[box][c]++;
22    }
23}
24  return true;       }
25};