class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_profit = INT_MIN;
        int profit = 0;
        int buy_day = 0;
        for(int i = 0; i<n;i++){
            profit = prices[i]-prices[buy_day];
            max_profit = max(max_profit, profit);
            if(profit <0){
                buy_day = i;
            }
        }
        return max_profit;
    }
};