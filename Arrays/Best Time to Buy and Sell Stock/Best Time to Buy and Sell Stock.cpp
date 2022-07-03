class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int small = prices[0];
        int profit = 0;
        for(int i=0;i<n;i++) {
           small = min(small, prices[i]);
           profit = max(profit, prices[i]-small);
        }
        
        return profit;
    }
};