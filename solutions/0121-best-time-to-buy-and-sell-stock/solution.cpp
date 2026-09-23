class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];
        int max_profit = 0;

        for (int p : prices) {
            if (p < min_price) {
                min_price = p;
            }
            else if (p - min_price > max_profit) {
                max_profit = p - min_price;
            }
        }

        return max_profit;
    }
};
