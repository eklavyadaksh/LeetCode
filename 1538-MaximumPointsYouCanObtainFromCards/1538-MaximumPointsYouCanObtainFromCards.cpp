// Last updated: 7/31/2026, 7:22:42 PM
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0,sum=0;
        for(int i=0;i<=k-1;i++)lsum=lsum+cardPoints[i];
        sum=lsum;
       int  ridx=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            lsum=lsum-cardPoints[i];
            rsum+=cardPoints[ridx];
            ridx--;
             sum=max(sum,rsum+lsum);
        }
           
        
   return sum; }
};