class Solution {
public:
    int arrangeCoins(int n) {
        
        long long start = 1,end = n; 
        long long mid;
        while(start <= end) {
            
            mid = start + (end - start)/2;
            long long ans = mid * (mid + 1)/2;
            if(ans == n) return mid;
            if(n < ans) end = mid - 1;
            else start = mid + 1;
        }
        return (int)end;
    }
};