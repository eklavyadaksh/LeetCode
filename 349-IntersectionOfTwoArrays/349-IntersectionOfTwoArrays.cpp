// Last updated: 7/31/2026, 7:23:43 PM
class Solution {
public:
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

    unordered_set<int> s(nums1.begin(), nums1.end());

    vector<int> ans;

    for(int x : nums2){

        if(s.count(x)){
            ans.push_back(x);
            s.erase(x);      // avoid duplicates
        }
    }

    return ans;
}
};
