// Last updated: 22/12/2025, 20:34:43
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4         int n =nums.size();
5        vector<int> arr(2*n);
6        for(int i=0;i<n;i++){
7            
8            arr[i]=nums[i];
9            arr[i+n]=nums[i];
10        }
11        return arr;
12        
13    }
14};