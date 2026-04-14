// Last updated: 4/14/2026, 9:15:36 AM
1class Solution {
2public:
3    int maxScore(vector<int>& cardPoints, int k) {
4        int lsum=0,rsum=0,sum=0;
5        for(int i=0;i<=k-1;i++)lsum=lsum+cardPoints[i];
6        sum=lsum;
7       int  ridx=cardPoints.size()-1;
8        for(int i=k-1;i>=0;i--){
9            lsum=lsum-cardPoints[i];
10            rsum+=cardPoints[ridx];
11            ridx--;
12             sum=max(sum,rsum+lsum);
13        }
14           
15        
16   return sum; }
17};