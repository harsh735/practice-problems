class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        // AAAAAAAA KITTY ｡◕‿‿◕｡
        
        map<pair<int,int>,int> memo = {}; 
        return solve(amount,coins,0,memo);
    }
    
    int solve(int amount, vector<int>&coins, int currCoin, map<pair<int,int>,int>&memo){
        
        if(amount == 0) return 1;
        
        if(currCoin >= coins.size() && amount != 0) return 0;        
        
        pair<int,int> currentKey(currCoin,amount);
        
        if(memo.find(currentKey) != memo.end()) return memo[currentKey];
        
        int contribute = 0;
        if(coins[currCoin] <= amount)
            contribute = solve(amount - coins[currCoin], coins,currCoin,memo);
            
        int notContribute = solve(amount,coins,currCoin + 1,memo);
        
        memo[currentKey] = contribute + notContribute;
        
        return memo[currentKey];
    }
};