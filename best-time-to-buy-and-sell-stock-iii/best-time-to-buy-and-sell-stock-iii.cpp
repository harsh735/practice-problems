class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        // im gonna prove myself and everyone!!!
        vector<vector<vector<int>>> memo(prices.size() + 1, vector<vector<int>>(3, vector<int>(3,-1)));
        return solve(prices,0,1,2,memo);
    }
    
    int solve(vector<int>&prices, int currIdx, int canBuy, int transactionCount, vector<vector<vector<int>>>&memo) {
        
        if(currIdx >= prices.size() || transactionCount <= 0) return 0;
        
        if(memo[currIdx][canBuy][transactionCount] != -1) return memo[currIdx][canBuy][transactionCount];
                
        
        int idle = solve(prices,currIdx + 1,canBuy,transactionCount,memo);
        if(canBuy) {
            int buy = -prices[currIdx] + solve(prices,currIdx + 1,0,transactionCount,memo);
            return memo[currIdx][canBuy][transactionCount] = max(idle,buy);
        } 
        
        else {
            int sell = prices[currIdx] + solve(prices,currIdx + 1,1, transactionCount - 1,memo);
            return memo[currIdx][canBuy][transactionCount] = max(idle,sell);
        }
            
    }
};