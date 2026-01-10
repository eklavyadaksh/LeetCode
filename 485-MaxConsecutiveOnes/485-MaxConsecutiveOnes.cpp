// Last updated: 10/01/2026, 11:52:32
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                maxCount = max(count, maxCount);
                count = 0;
            } else {
                count++;
            }
        }
        maxCount = max(count, maxCount);
        return maxCount;
    }
};