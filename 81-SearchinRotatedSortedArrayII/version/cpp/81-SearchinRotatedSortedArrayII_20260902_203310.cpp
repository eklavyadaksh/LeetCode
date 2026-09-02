// Last updated: 9/2/2026, 8:33:10 PM
1class Solution {
2public:
3    bool search(vector<int>& nums, int target) {
4              int l = 0, r = nums.size() - 1;
5       
6
7    while (l <= r) {
8        int mid = l + (r - l) / 2;
9         
10        if (nums[mid] == target) return true;;
11         if(nums[l]==nums[mid]&& nums[mid]==nums[r]){
12         l += 1, r -= 1;
13         continue;
14         }
15        // left half sorted
16        if (nums[l] <= nums[mid]) {
17            if (nums[l] <= target && target < nums[mid])
18                r = mid - 1;
19            else
20                l = mid + 1;
21        }
22        // right half sorted
23        else {
24            if (nums[mid] < target && target <= nums[r])
25                l = mid + 1;
26            else
27                r = mid - 1;
28        }
29    }
30    return false;
31  }
32};