class Solution {
public:
    int fib(int n) {
        //(ᵔᴥᵔ) LETS GO BOBOOBOBOBKQWJIQJIH hhehehehehehehe
        
        unordered_map<int,int> memo = {};
        return fiboDP(n,memo);
    }
    
    int fiboDP(int n, unordered_map<int,int> &memo){
        
        if(n == 1 || n == 0) return n;
        
        int currentKey = n;
        
        for(auto it: memo){
            if(it.first == currentKey) return memo[currentKey];
        }
        
        int oneStep = fiboDP(n-1,memo);
        int twoStep = fiboDP(n-2,memo);
        
        memo[currentKey] = oneStep + twoStep;
        return memo[currentKey];
    }
};