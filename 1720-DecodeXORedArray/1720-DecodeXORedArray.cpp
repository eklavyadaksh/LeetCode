// Last updated: 03/04/2026, 13:33:50
1class Solution {
2public:
3    vector<int> decode(vector<int>& encoded, int first) {
4         vector<int> arr(encoded.size()+1);
5         arr[0]=first;
6         for(int i=0;i<encoded.size();i++){
7            arr[i+1]=arr[i]^encoded[i];
8         }
9         return arr;
10    }
11};