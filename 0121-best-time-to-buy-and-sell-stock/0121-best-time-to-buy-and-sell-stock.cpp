class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy_day = 0;
        int profit = 0;
        int max_profit = INT_MIN;
        for(int i = 0 ; i<n; i++){
            profit = prices[i] - prices[buy_day];
            max_profit = max(profit, max_profit);
            if(profit<0){
                buy_day = i;
            }

        }
        return max_profit;
        
    }
};