// Last updated: 8/15/2026, 8:25:11 PM
1class Solution {
2public:
3    int elevatorRequests(int n, vector<int>& requests) {
4        int time = 0;
5        int current = 0;
6
7        for (int i = 0; i < requests.size(); i++) {
8            time += abs(current - requests[i]);
9            current = requests[i];
10        }
11
12        return time;
13    }
14};