class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        
        // (¬‿¬)
        
        vector<vector<int>> memo(prices.size(), vector<int>(2,-1));
        return solve(prices,fee,0,1,memo);
    }
    
    int solve(vector<int>&prices, int fee, int currIdx, int canBuy, vector<vector<int>>&memo) {
        
        if(currIdx >= prices.size()) return 0;
        if(memo[currIdx][canBuy] != -1) return memo[currIdx][canBuy];
        
        int idle = solve(prices,fee,currIdx + 1,canBuy,memo);
        if(canBuy) {
            int buy = -prices[currIdx] + solve(prices,fee,currIdx + 1,0,memo);
            return memo[currIdx][canBuy] = max(idle,buy);
        }
            
        else {
            int sell = - fee + prices[currIdx] + solve(prices,fee,currIdx + 1,1,memo);
            return memo[currIdx][canBuy] = max(idle,sell);
        }
            
    }
};
