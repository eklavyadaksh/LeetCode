// Last updated: 11/26/2026, 11:47:55 PM
class Solution {
public:
    bool checkDivisibility(int n) {
       int original = n;
       int sum = 0;
       int product = 1;

       while(n!=0){
        int rem = n%10;

        sum+=rem;
        product*=rem;
        n = n/10;
       }
       return original % (sum+product) == 0;
        
    }
};