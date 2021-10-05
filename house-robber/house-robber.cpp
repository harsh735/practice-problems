class Solution {
public:
    int rob(vector<int>& nums) {
        unordered_map<int,int> memo = {};
        return robMax(nums,0,memo);
    }
    
    int robMax(vector<int> &nums, int currentHouse, unordered_map<int,int> &memo){
        
        if(currentHouse >= nums.size()) return 0;
        
        int currentKey = currentHouse;
        
        for(auto it: memo){
            if(it.first == currentKey){
                return memo[currentKey]; // return value present at that key
            }
        }
        
        int robbing = nums[currentHouse] + robMax(nums,currentHouse+2,memo);
        int notRobbing = robMax(nums,currentHouse+1,memo);
        
        memo[currentKey] = max(robbing,notRobbing);
        return memo[currentKey];
    }
};