// Last updated: 08/04/2026, 19:45:27
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4    int l = 0, r = nums.size() - 1;
5
6    while (l <= r) {
7        int mid = l + (r - l) / 2;
8
9        if (nums[mid] == target) return mid;
10
11        // left half sorted
12        if (nums[l] <= nums[mid]) {
13            if (nums[l] <= target && target < nums[mid])
14                r = mid - 1;
15            else
16                l = mid + 1;
17        }
18        // right half sorted
19        else {
20            if (nums[mid] < target && target <= nums[r])
21                l = mid + 1;
22            else
23                r = mid - 1;
24        }
25    }
26    return -1;
27}
28};