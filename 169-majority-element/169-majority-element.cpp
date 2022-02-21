class Solution {
public:
    int majorityElement(vector<int>& nums) {    
        
        int ans = 0;
        int freq = 0;
        for(int i = 0; i<nums.size(); i++){
            
            if(freq == 0)
                ans = nums[i];
            
            if(ans != nums[i])
                freq--;
            
            else
                freq++;
        }
        return ans;
    }
};


/*

//TC -> O(N)
        //SC -> O(N)
        unordered_map<int , int> newNums;
        
        for(int i = 0; i<nums.size(); i++){
            newNums[nums[i]]++;
        }
                               
        for(auto it: newNums){
            if(it.second > (nums.size()/2)){
                return it.first;
            }
        }
        
        return 0;


*/