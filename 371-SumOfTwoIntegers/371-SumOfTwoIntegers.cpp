// Last updated: 7/31/2026, 7:23:41 PM
class Solution {
public:
    int getSum(int a, int b) {
         while (b != 0) {
    
        int carry = a & b;

        
        a = a ^ b;

        
        b = carry << 1;
    }
    return a;
    }
};