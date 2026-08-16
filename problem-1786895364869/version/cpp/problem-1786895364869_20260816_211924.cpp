// Last updated: 8/16/2026, 9:19:24 PM
1class Solution {
2public:
3    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
4        int minDistance = INT_MAX;
5        int answer = -1;
6
7        for (int i = 0; i < drones.size(); i++) {
8            int distance = abs(target[0] - drones[i][0]) +
9                           abs(target[1] - drones[i][1]);
10
11            if (distance <= drones[i][2]) {
12                if (distance < minDistance) {
13                    minDistance = distance;
14                    answer = i;
15                }
16            }
17        }
18
19        return answer;
20    }
21};