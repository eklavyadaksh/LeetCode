// Last updated: 8/20/2026, 11:53:37 PM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int low = 0;
5        int high = nums.size() - 1;
6
7        while (low < high) {
8            int mid = low + (high - low) / 2;
9
10            if (nums[mid] > nums[high]) {
11                low = mid + 1;
12            }
13            else {
14                high = mid;
15            }
16        }
17
18        return nums[low];
19    }
20};