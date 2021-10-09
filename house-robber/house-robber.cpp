class Solution {
public:
    int rob(vector<int>& nums) {
        unordered_map<int,int> memo = {};
        return robMax(nums,0,memo);
    }
    
    int robMax(vector<int> &nums, int currentHouse, unordered_map<int,int> &memo){
        
        if(currentHouse >= nums.size()) return 0;
        
        int currentKey = currentHouse;
        
        if(memo.find(currentKey) != memo.end())
            return memo[currentKey];
        
        int robbing = nums[currentHouse] + robMax(nums,currentHouse+2,memo);
        int notRobbing = robMax(nums,currentHouse+1,memo);
        
        memo[currentKey] = max(robbing,notRobbing);
        return memo[currentKey];
    }
};