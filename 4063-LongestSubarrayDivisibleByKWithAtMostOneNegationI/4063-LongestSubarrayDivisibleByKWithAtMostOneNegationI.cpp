// Last updated: 11/26/2026, 11:47:34 PM


#include <vector>
#include <algorithm>

class Solution {
public:
    int longestSubarray(std::vector<int>& nums, int k) {
        int n = nums.size();
        int maxLen = 0;
        int minaveloru = k;
        
        for (int i = 0; i < n; i++) {
            long long currentSum = 0;
            std::vector<bool> seenRemainder(k, false);
            
            for (int j = i; j < n; j++) {
                currentSum += nums[j];
                int rem = (currentSum % k + k) % k;
                
                long long targetMod = (2LL * nums[j]) % k;
                targetMod = (targetMod + k) % k;
                seenRemainder[targetMod] = true;
                
                if (rem == 0 || seenRemainder[rem]) {
                    maxLen = std::max(maxLen, j - i + 1);
                }
            }
        }
        
        return maxLen;
    }
};
