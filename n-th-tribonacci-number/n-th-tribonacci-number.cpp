class Solution {
public:
    int tribonacci(int n) {
        //(ღ˘⌣˘ღ) BOBOBOBOBOBOBOBO
        unordered_map<int, int> memo = {};
        return tribo(n,memo);
    }
    
    int tribo(int n, unordered_map<int, int> &memo){
        
        if(n == 1 || n == 0) return n;
        else if(n == 2) return 1;
        int currentKey = n;
        
        for(auto it: memo){
            if(it.first == currentKey) return memo[currentKey];
        }
        
        int oneStep = tribo(n-1,memo);
        int twoStep = tribo(n-2,memo);
        int threeStep = tribo(n-3, memo);
        
        memo[currentKey] = oneStep + twoStep + threeStep;
        return memo[currentKey];
    }
};