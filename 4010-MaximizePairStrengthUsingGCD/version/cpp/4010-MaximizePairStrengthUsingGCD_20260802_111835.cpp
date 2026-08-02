// Last updated: 8/2/2026, 11:18:35 AM
1class Solution {
2public:
3    long long maxPairStrength(vector<int>& nums) {
4    long long strength = 0; // Stores the maximum LCM found
5    int n = nums.size();
6    
7    // O(N^2) approach to check all pairs for the true maximum
8    for (int i = 0; i < n; i++) {
9        for (int j = i + 1; j < n; j++) {
10            // LCM formula: (a * b) / gcd(a, b)
11    long long g = std::gcd(nums[i], nums[j]);
12long long value = (1LL * nums[i] * nums[j]) / (g * g);
13            if (value > strength) {
14                strength = value;
15            }
16        }
17    }
18    return strength;
19}
20};