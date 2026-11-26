// Last updated: 11/26/2026, 11:48:05 PM
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    vector<int> ans;

    for (int i = 0; i < nums.size(); i += 2) {
        ans.push_back(nums[i + 1]);
        ans.push_back(nums[i]);
    }

    return ans;
}
};