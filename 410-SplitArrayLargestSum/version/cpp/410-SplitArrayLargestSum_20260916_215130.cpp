// Last updated: 9/16/2026, 9:51:30 PM
1class Solution {
2public:
3    bool possible(int barrier,vector<int> nums,int k){
4       int  allst=1,pages=0;
5       for(int i=0;i<nums.size();i++){
6        if(nums[i]>barrier)return false;
7         if(nums[i]+pages>barrier){
8              allst+=1;
9              pages=nums[i];
10              
11         }
12         else{
13            pages+=nums[i];
14         }
15       }
16       if(allst>k)return false;
17       
18       return true;
19    }
20
21    int splitArray(vector<int>& nums, int k) {
22     int low=*min_element(nums.begin(),nums.end());
23     int high= std::accumulate(std::begin(nums), std::end(nums), 0);
24     int res=0;
25     while(low<=high){
26        int mid=low+(high-low)/2;
27        if(possible(mid,nums,k)){
28            res=mid;
29            high=mid-1;
30        }
31        else{
32            low=mid+1;
33        }
34     }
35    return res;}
36};