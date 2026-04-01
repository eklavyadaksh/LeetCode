// Last updated: 02/04/2026, 00:27:30
1class Solution {
2public:
3  
4    vector<vector<int>> merge(vector<vector<int>>& intervals) {
5       vector<vector<int>> res;
6       sort(intervals.begin(),intervals.end());
7
8    for (int i = 0; i < intervals.size(); i++) {
9        if (res.empty() || res.back()[1] < intervals[i][0]) {
10            res.push_back(intervals[i]);
11        } else {
12            res.back()[1] = max(res.back()[1], intervals[i][1]);
13        }
14    }
15    return res;
16    }
17};