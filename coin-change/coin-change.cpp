class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        // im here
        
        vector<vector<int>> memo(coins.size(), vector<int>(amount + 1, -1));
        int ans = 10000007;
        ans = minCoins(coins,0,amount,memo);
        if(ans == 10000007) return -1;
        else return ans;
    }
    
    int minCoins(vector<int> &coins, int currIdx, int amount, vector<vector<int>> &memo){
        
        if(amount == 0) return 0;
        
        else if(currIdx >= coins.size()) return 10000007;
                    
        if (memo[currIdx][amount] != -1) return memo[currIdx][amount];
        
        int consider = 10000007;
        if(coins[currIdx] <= amount)
            consider = 1 + minCoins(coins, currIdx , amount - coins[currIdx],memo);            
        
        int notConsider = minCoins(coins,currIdx + 1,amount,memo);
        return memo[currIdx][amount] = min(consider,notConsider);
        
    }
};