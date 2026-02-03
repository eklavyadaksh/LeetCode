// Last updated: 03/02/2026, 18:02:31
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string,vector<string>> mp;
5        for(string s:strs){
6
7            int arr[26]={0};
8            for(char c:s){
9                arr[c-'a']++;
10            }
11            string key="";
12            for(int i=0;i<26;i++){
13                key+=to_string(arr[i])+ "#";
14            }
15            mp[key].push_back(s);
16        }
17         vector<vector<string>> result;
18         for(auto it:mp){
19            result.push_back(it.second);
20
21         }
22        return result;
23    }
24};