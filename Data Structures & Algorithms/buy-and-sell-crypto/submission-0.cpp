class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0];
        int max_profit = 0;
        for(int i = 1; i<prices.size(); i++){
            int cur_price = prices[i] - mini;
            mini = min(mini, prices[i]);
            max_profit = max(max_profit, cur_price);
        }
        return max_profit;
    }
};
