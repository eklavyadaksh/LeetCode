// Last updated: 11/26/2026, 11:47:37 PM
class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
    long long strength = 0; // Stores the maximum LCM found
    int n = nums.size();
    
    // O(N^2) approach to check all pairs for the true maximum
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // LCM formula: (a * b) / gcd(a, b)
    long long g = std::gcd(nums[i], nums[j]);
long long value = (1LL * nums[i] * nums[j]) / (g * g);
            if (value > strength) {
                strength = value;
            }
        }
    }
    return strength;
}
};