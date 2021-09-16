class Solution {
public:
    bool isPowerOfThree(int n) {
        
        //trying recursion    
            
        if(n == 0)
            return false;
        if(n == 1)
            return true;
        
        if(n % 3 == 0){
            return isPowerOfThree(n/3);
        }
        return false;
    }
};