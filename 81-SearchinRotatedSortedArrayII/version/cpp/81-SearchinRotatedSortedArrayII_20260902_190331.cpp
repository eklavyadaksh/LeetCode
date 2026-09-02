// Last updated: 9/2/2026, 7:03:31 PM
1class Solution {
2public:
3    bool search(vector<int>& nums, int target) {
4        sort(nums.begin(),nums.end());
5        int l = 0, r = nums.size() - 1;
6
7    while (l <= r) {
8        int mid = l + (r - l) / 2;
9
10        if (nums[mid] == target) return true;;
11
12        // left half sorted
13        if (nums[l] <= nums[mid]) {
14            if (nums[l] <= target && target < nums[mid])
15                r = mid - 1;
16            else
17                l = mid + 1;
18        }
19        // right half sorted
20        else {
21            if (nums[mid] < target && target <= nums[r])
22                l = mid + 1;
23            else
24                r = mid - 1;
25        }
26    }
27    return false;
28  }
29};