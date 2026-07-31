// Last updated: 7/31/2026, 7:24:39 PM
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1)
            return 0;

        vector<bool> visited(n, false);
        queue<int> q;

        q.push(0);
        visited[0] = true;

        int jumps = 0;

        while (!q.empty()) {
            int size = q.size();
            jumps++;

            while (size--) {
                int index = q.front();
                q.pop();

                for (int step = 1; step <= nums[index]; step++) {
                    int nextIndex = index + step;

                    if (nextIndex >= n - 1)
                        return jumps;

                    if (!visited[nextIndex]) {
                        visited[nextIndex] = true;
                        q.push(nextIndex);
                    }
                }
            }
        }

        return -1;
    }
};
