// Last updated: 11/26/2026, 11:48:07 PM
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=0,num2=0;
        for(int i=0;i<n+1;i++){
            if(i%m!=0)
             num1+=i;
        }
        for(int j=0;j<n+1;j++){
            if(j%m==0)
             num2+=j;
        }
        
    return num1-num2;}
};