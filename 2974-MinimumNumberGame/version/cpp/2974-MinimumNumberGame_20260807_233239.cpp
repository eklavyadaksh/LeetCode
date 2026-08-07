// Last updated: 8/7/2026, 11:32:39 PM
1class Solution {
2public:
3    vector<int> numberGame(vector<int>& nums) {
4    sort(nums.begin(), nums.end());
5
6    vector<int> ans;
7
8    for (int i = 0; i < nums.size(); i += 2) {
9        ans.push_back(nums[i + 1]);
10        ans.push_back(nums[i]);
11    }
12
13    return ans;
14}
15};