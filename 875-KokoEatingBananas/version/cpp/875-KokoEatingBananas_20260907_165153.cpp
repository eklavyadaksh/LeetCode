// Last updated: 9/7/2026, 4:51:53 PM
1class Solution {
2public:
3    int minEatingSpeed(vector<int>& piles, int h) {
4        
5        int max=*max_element(piles.begin(),piles.end());
6        int low=1,high=max;
7        int ans=INT_MAX;
8        while(low<=high){
9            int mid=low+(high-low)/2;
10            long long sum=0;
11            for(auto x:piles){
12             sum += (1LL * x + mid - 1) / mid;
13            }
14            if(sum<=h){
15                ans=mid;
16                high=mid-1;
17            }
18            else if(sum>h)low=mid+1;
19            
20        
21          
22        }
23    return ans;
24    }
25};