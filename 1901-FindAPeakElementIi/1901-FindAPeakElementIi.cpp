// Last updated: 11/26/2026, 11:48:47 PM
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return {-1, -1};

        int m = matrix.size();
        int n = matrix[0].size();

        for (int c = 0; c < n; c++) {
            int low = 0;
            int high = m - 1;

            while (low < high) {
                int mid = low + (high - low) / 2;

                if (matrix[mid][c] < matrix[mid + 1][c])
                    low = mid + 1;
                else
                    high = mid;
            }

            int row = low;

            if ((c == 0 || matrix[row][c] > matrix[row][c - 1]) &&
                (c == n - 1 || matrix[row][c] > matrix[row][c + 1])) {
                return {row, c};
            }
        }

        return {-1, -1};
    }
};