class Solution {
public:
    int countOrders(int n) {
        
        long long ans = 1, mod = 1000000007;
        for(int i = 1; i <=n; i++){
            ans *= i;
            ans %= mod;
			
			// (2*i-1) are the vacant places which we can choose
			// later we have n! permutation of pickup task
			// therefore we have to multiply with n! that we calculated as res.
            ans *= (2*i-1);
			
			// to avoid overflow
            ans %= mod;
        }
        
		// to avoid overflow
        return ans % mod;
    }
};