// Last updated: 9/7/2026, 8:26:55 PM
1class Solution {
2public:
3    int minDays(vector<int>& bloomDay, int m, int k) {
4       if (1LL * m * k > bloomDay.size())return -1;
5        int low=*min_element(bloomDay.begin(),bloomDay.end());
6        int high=*max_element(bloomDay.begin(),bloomDay.end());
7       int ans=-1;
8        while(low<=high){
9            int mid=low+(high-low)/2;
10             int b=0; 
11            int count=0;
12            for(int i=0;i<bloomDay.size();i++){
13                if(bloomDay[i]<=mid ){
14                    count++;
15                   
16                }
17                else {
18                    b+=count/k;
19                    count=0;
20                }
21                
22                
23            }
24           b += count / k;
25            if(b>=m){
26                ans=mid;
27             high=mid-1;
28            }
29            else low=mid+1;
30         
31            
32        }
33        
34        return ans; }
35};