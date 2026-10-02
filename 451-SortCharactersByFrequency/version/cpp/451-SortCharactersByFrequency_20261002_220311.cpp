// Last updated: 10/2/2026, 10:03:11 PM
1class Solution {
2public:
3    string frequencySort(string s) {
4        unordered_map<char,int> mp;
5        string ans="";
6        for(char c:s){
7            mp[c]++;
8        }
9        while(!mp.empty()){
10            int maxElement = -1;
11            int maxFrequency = 0;
12
13    auto maxIt = std::max_element(mp.begin(), mp.end(), 
14            [](const auto& a, const auto& b) { return a.second < b.second; });
15
16        int maxKey = maxIt->first;
17        int maxfrequency=maxIt->second;
18  ans.append(maxfrequency, maxKey);
19        mp.erase(maxIt);
20        }
21        return ans;
22    }
23};