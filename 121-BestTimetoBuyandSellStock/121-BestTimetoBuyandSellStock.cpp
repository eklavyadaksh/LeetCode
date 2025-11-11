// Last updated: 11/11/2025, 20:00:51
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices) {
        minPrice = min(minPrice, price); 
        maxProfit = max(maxProfit, price - minPrice);
    }
    return maxProfit;
        
    }
};