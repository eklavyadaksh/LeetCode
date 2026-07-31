// Last updated: 7/31/2026, 7:22:53 PM
class Solution {
public:
    int bitwiseComplement(int n) {
       int m=n;
       int mask=0;
       if(m==0)
        return 1;
       while(m!=0){
        mask=(mask << 1)|1;
        m=m >> 1;
       }
     int ans=~n&mask;
   return ans; }
};