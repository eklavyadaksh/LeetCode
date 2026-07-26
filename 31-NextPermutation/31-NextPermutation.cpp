// Last updated: 7/26/2026, 8:08:52 PM
1class Solution {
2public:
3    void nextPermutation(vector<int>& nums) {
4        int n=nums.size();
5      
6       
7        
8       int idx = -1;
9    for (int i = n - 2; i >= 0; i--) {
10    if (nums[i] < nums[i+1]) {
11       
12        idx = i;
13        break;
14    }
15} 
16if (idx == -1) {
17    reverse(nums.begin(), nums.end());
18    return;
19}
20       for(int i=n-1;i> idx;i--){
21        {
22          if(nums[i]>nums[idx]){
23          swap(nums[i],nums[idx]);
24          break;
25          }
26        }   
27
28            
29
30       }
31       
32       reverse(nums.begin() + idx + 1, nums.end());
33    }
34    
35};