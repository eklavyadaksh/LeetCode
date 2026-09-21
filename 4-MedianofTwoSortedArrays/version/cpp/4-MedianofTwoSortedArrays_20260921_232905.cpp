// Last updated: 9/21/2026, 11:29:05 PM
1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        if (nums1.size() < nums2.size())
5            return findMedianSortedArrays(nums2, nums1);
6
7        int n1 = nums1.size();
8        int n2 = nums2.size();
9
10        int totalLeft = (n1 + n2 + 1) / 2;
11
12        int low = max(0, totalLeft - n2);
13        int high = min(n1, totalLeft);
14
15        while (low <= high) {
16            int cut1 = (low + high) >> 1;
17            int cut2 = totalLeft - cut1;
18
19            int left1 = (cut1 == 0) ? INT_MIN : nums1[cut1 - 1];
20            int left2 = (cut2 == 0) ? INT_MIN : nums2[cut2 - 1];
21
22            int right1 = (cut1 == n1) ? INT_MAX : nums1[cut1];
23            int right2 = (cut2 == n2) ? INT_MAX : nums2[cut2];
24
25            if (left1 <= right2 && left2 <= right1) {
26                if ((n1 + n2) % 2 == 0) {
27                    return (max(left1, left2) + min(right1, right2)) / 2.0;
28                } else {
29                    return max(left1, left2);
30                }
31            }
32            else if (left1 > right2) {
33                high = cut1 - 1;
34            }
35            else {
36                low = cut1 + 1;
37            }
38        }
39
40        return 0.0;
41    }
42};