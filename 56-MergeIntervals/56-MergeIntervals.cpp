// Last updated: 10/01/2026, 11:52:35
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};
        
        // Step 1: Sort intervals by start time
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> merged;
        merged.push_back(intervals[0]);
        
        // Step 2: Traverse and merge
        for (int i = 1; i < intervals.size(); i++) {
            if (merged.back()[1] >= intervals[i][0]) {
                // Overlap → merge
                merged.back()[1] = max(merged.back()[1], intervals[i][1]);
            } else {
                // No overlap → add new interval
                merged.push_back(intervals[i]);
            }
        }
        
        return merged;
    }
};