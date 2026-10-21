// Last updated: 10/21/2026, 10:57:47 PM
1class Solution {
2public:
3    int numSubarraysWithSum(vector<int>& arr, int k) {
4        
5    unordered_map<int ,int> freq;
6    freq[0] = 1;
7
8    int prefix = 0, count = 0;
9
10    for (int i = 0; i < arr.size(); i++) {
11        prefix += arr[i];
12
13        count += freq[prefix - k];
14
15        freq[prefix]++;
16    }
17
18return count;
19    }
20};