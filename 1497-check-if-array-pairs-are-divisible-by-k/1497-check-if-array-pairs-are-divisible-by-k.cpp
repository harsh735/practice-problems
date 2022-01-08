class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        
       unordered_map<int,int> memo;
        for(auto it: arr){
            int rem = ((it % k) + k) % k;   //to handle the case for negative numbers
            if(memo.find(rem) != memo.end())
                memo[rem]++;
            else
                memo.insert(make_pair(rem,1));
        }
        
        for(auto it: arr){
            int rem = ((it % k) + k) % k;
            
            //if remainder is 0 we want even count
            if(rem == 0) {
                if(memo[rem] % 2 != 0) return false;     
            }
            
            //if remainder = k/2 then we want even count
            else if(2 * rem == k){
                if(memo[rem] % 2 != 0) return false;                
            }
            
            //else if remainder = k - remainder
            else{
                if(memo[rem] != memo[k - rem]) return false;
            }       
        }
        return true;
    }
};