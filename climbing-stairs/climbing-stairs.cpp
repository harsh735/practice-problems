class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int, int> memo = {};
        return totalWays(0,n, memo);    
    }
    
    int totalWays(int currentStair, int targetStair, unordered_map<int,int> &memo){
        
        if(currentStair == targetStair) return 1;
        
        else if(currentStair > targetStair) return 0;
        
        
        int currentKey = currentStair;
        
        for(auto it: memo){
            if(it.first == currentKey){
                return memo[currentKey];
            }
        }
        
        int oneStep = totalWays(currentStair+1, targetStair, memo);
        int twoStep = totalWays(currentStair+2, targetStair, memo);
        
        memo[currentKey] = oneStep + twoStep;
        return memo[currentKey];
    }
    
    
};