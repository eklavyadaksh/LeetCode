// Last updated: 11/11/2025, 16:33:44
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int first = -1, last = -1;

        // Find first occurrence
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                first = mid;
                right = mid - 1; // move left
            } 
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        // Reset for finding last occurrence
        left = 0;
        right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                last = mid;
                left = mid + 1; // move right
            } 
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return {first, last};
    }
};
