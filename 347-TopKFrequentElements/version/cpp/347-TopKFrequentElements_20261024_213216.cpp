// Last updated: 10/24/2026, 9:32:16 PM
1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        unordered_map<int,int> mp;
5        vector<int> ans;
6        for(auto x:nums){
7            mp[x]++;
8        }
9        while(k--){
10            int maxKey = -1;
11
12if (!mp.empty()) {
13    auto maxIt = std::max_element(mp.begin(), mp.end(), 
14        [](const auto& p1, const auto& p2) {
15            return p1.second < p2.second;
16        });
17    maxKey = maxIt->first;
18}
19ans.push_back(maxKey);
20mp.erase(maxKey);
21        }
22   return ans; }
23};