/*You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0. */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int buy_prize=prices[0];

        for(int i=0;i<prices.size();i++){
            int cur_profit=prices[i]- buy_prize;
            if(cur_profit>max_profit){
                max_profit =cur_profit;
            }
            if(prices[i]<buy_prize){
                buy_prize=prices[i];
            }
        }
        return max_profit;
    }
};
