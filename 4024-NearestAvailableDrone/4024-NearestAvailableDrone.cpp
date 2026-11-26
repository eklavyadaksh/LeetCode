// Last updated: 11/26/2026, 11:47:36 PM
class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int minDistance = INT_MAX;
        int answer = -1;

        for (int i = 0; i < drones.size(); i++) {
            int distance = abs(target[0] - drones[i][0]) +
                           abs(target[1] - drones[i][1]);

            if (distance <= drones[i][2]) {
                if (distance < minDistance) {
                    minDistance = distance;
                    answer = i;
                }
            }
        }

        return answer;
    }
};