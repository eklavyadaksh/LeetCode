// Last updated: 7/26/2026, 6:17:25 PM
1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) {
4        ios_base::sync_with_stdio(false);
5        cin.tie(NULL);
6        int pos=0;
7
8        int neg=1;
9        int n=nums.size();
10        vector<int> ans(n);
11        for(int i=0;i<nums.size();i++){
12            if(nums[i]>0 ){
13               ans[pos]=nums[i];
14                pos+=2;
15        }
16       else{
17          ans[neg]=nums[i];
18        neg+=2;
19       }
20        }
21   return ans; 
22    }
23};