class Solution {
public:
    bool isPalindrome(int x) {
        long long int rev = 0;
        int n = x;
        if(n < 0)
            return false;
        
        while(n > 0)
        {
            int lastDig = n%10;
            rev = rev * 10 + lastDig;
            n = n/10;  
        }
        return x == rev;
        
    }
};