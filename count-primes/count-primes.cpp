class Solution {
public:
    int countPrimes(int n) {
        
        if(n == 1){
            return 0;
        }
        int count = 0;
        bool primes[n+1];
        memset(primes,true,sizeof(primes));
        
        for(int i =2; i<=sqrt(n); i++){
            
            if(primes[i] == true){
                
                for(int j = i*i; j<=n; j+=i){
                    primes[j] = false;
                }
            }
        }
        
        for(int i =2; i<n; i++){
            if(primes[i]){
                count+=1;
            }
        }
        return count;
    }
};