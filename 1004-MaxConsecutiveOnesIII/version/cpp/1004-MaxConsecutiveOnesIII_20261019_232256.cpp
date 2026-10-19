// Last updated: 10/19/2026, 11:22:56 PM
1class Solution {
2public:
3    int longestOnes(vector<int>& arr, int k) {
4       int zeroes=0;
5       int left=0;
6       int maxi=0;
7       for(int right=0;right<arr.size();right++){
8        if(arr[right]==0)zeroes++;
9        while(zeroes>k){
10            if(arr[left]==0)zeroes--;
11
12            left++;
13        }
14        maxi=max(maxi,right-left+1);
15
16       }
17   return maxi; }
18};