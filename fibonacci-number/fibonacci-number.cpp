class Solution {
public:
    int fib(int n) {
        
        //(ᵔᴥᵔ) BOB BOB BOB
        
        int dp[31] = {0};
        if(n == 1 || n == 0)
            return n;
        
        //lookup
        if(dp[n] != 0){
            return dp[n];
        }
        int ans;
        ans = fib(n-1) + fib(n-2);
        return dp[n] = ans;
    }
};