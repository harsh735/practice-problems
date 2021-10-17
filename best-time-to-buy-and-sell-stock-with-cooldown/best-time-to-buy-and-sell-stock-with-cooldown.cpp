class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        // *ROLLS AND SLEEPS*
        
        vector<vector<int>> memo(prices.size(), vector<int>(2,-1));
        return solve(prices,0,1,memo);
    }
    
    int solve(vector<int>& prices, int currIdx, int canBuy, vector<vector<int>>&memo) {
        
        if(currIdx >= prices.size()) return 0;
        if(memo[currIdx][canBuy] != -1) return memo[currIdx][canBuy];
        
        int idle = solve(prices,currIdx + 1, canBuy, memo);
        if(canBuy) {
            int buy = -prices[currIdx] + solve(prices, currIdx + 1, 0, memo);
            return memo[currIdx][canBuy] = max(idle,buy);
        }
        else {
            int sell = prices[currIdx] + solve(prices,currIdx + 2, 1,memo);
            return memo[currIdx][canBuy] = max(idle,sell);
        }
    }
};