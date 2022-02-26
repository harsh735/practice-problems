class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;
        mp[0] = -1;
        int sum = 0;
        
        for(int i=0;i<nums.size();i++){
            
            sum += nums[i];
            
            if(k != 0) 
                sum = sum % k;
            
            //check if the runningsum already exists in the hashmap
            if(mp.find(sum) != mp.end()){
                //if it exists, then the current location minus the previous location must be greater than1
                
                if(i - mp[sum] > 1)
                    return true;
            }
            else{
                //otherwise if the current runningSum doesn't exist in the hashmap, then store it as it maybe used later on
                
                mp[sum] = i;
            }
                    
        }
        
        return false;
       
    }
};