class Solution {
public:
    int addDigits(int num) {
        
        if(num == 0) return 0;
        int sum = 0;
        
        while(num > 0){
            sum = sum + num%10;
            num = num/10;
        }
        if(sum >= 0 && sum <= 9) return sum;
        return addDigits(sum); 
    }
};