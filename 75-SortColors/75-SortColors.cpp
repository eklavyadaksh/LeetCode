// Last updated: 7/9/2026, 12:10:10 PM
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4      if (nums.empty()) return;
5
6    // 1. Find the maximum element to determine the count range
7    int max_val = *std::max_element(nums.begin(), nums.end());
8
9    // 2. Initialize count and output vectors with zeros
10    std::vector<int> count(max_val + 1, 0);
11    std::vector<int> output(nums.size());
12
13    // 3. Store the frequency of each element
14    for (int num : nums) {
15        count[num]++;
16    }
17
18    // 4. Update count array with cumulative prefix sums
19    for (int i = 1; i <= max_val; i++) {
20        count[i] += count[i - 1];
21    }
22
23    // 5. Build output array in reverse to ensure stability
24    for (int i = nums.size() - 1; i >= 0; i--) {
25        output[count[nums[i]] - 1] = nums[i];
26        count[nums[i]]--;
27    }
28
29    // 6. Transfer sorted elements back to the original nums array
30    nums = output;
31
32        }
33    
34};