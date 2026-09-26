// Last updated: 9/26/2026, 9:11:58 PM
1
2
3#include <vector>
4#include <algorithm>
5
6class Solution {
7public:
8    int longestSubarray(std::vector<int>& nums, int k) {
9        int n = nums.size();
10        int maxLen = 0;
11        int minaveloru = k;
12        
13        for (int i = 0; i < n; i++) {
14            long long currentSum = 0;
15            std::vector<bool> seenRemainder(k, false);
16            
17            for (int j = i; j < n; j++) {
18                currentSum += nums[j];
19                int rem = (currentSum % k + k) % k;
20                
21                long long targetMod = (2LL * nums[j]) % k;
22                targetMod = (targetMod + k) % k;
23                seenRemainder[targetMod] = true;
24                
25                if (rem == 0 || seenRemainder[rem]) {
26                    maxLen = std::max(maxLen, j - i + 1);
27                }
28            }
29        }
30        
31        return maxLen;
32    }
33};
34