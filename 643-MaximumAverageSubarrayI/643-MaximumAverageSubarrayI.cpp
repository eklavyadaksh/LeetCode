// Last updated: 06/02/2026, 17:54:19
1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        int windowSum = 0;
5
6        
7        for (int i = 0; i < k; i++) {
8            windowSum += nums[i];
9        }
10
11        int maxSum = windowSum;
12
13    
14        for (int i = k; i < nums.size(); i++) {
15            windowSum += nums[i];        
16            windowSum -= nums[i - k];    
17            maxSum = max(maxSum, windowSum);
18        }
19
20        
21        return (double) maxSum / k;
22    }
23};