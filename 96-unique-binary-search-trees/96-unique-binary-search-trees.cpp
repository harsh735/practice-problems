class Solution {
public:
    int numTrees(int n) {
        
        if(n < 2) return n;
        return solve(n);
    }
    
    int solve(int n){
        
        int memo[n+1];
        memo[0] = memo[1] = 1;
        for(int i = 2; i<=n; i++){
            memo[i] = 0; 
            for(int j = 0; j<i; j++){
                
                memo[i] += memo[j] * memo[i - j - 1];
            }
        }
        return memo[n];
    }
};