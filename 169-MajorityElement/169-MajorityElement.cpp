// Last updated: 7/23/2026, 7:46:22 PM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int count=0;
5        int el=nums[0];
6        for(int i=0;i<nums.size();i++){
7            
8            if(nums[i]==el)count++;
9            else 
10               count--;
11             if(count==0){
12                el=nums[i];
13                count++;
14            }
15        }
16    return el;
17    }
18};