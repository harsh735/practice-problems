class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        
        map<pair<int,int>,int> memo = {};
        return solve(nums,target,0,memo);
    }
    
    int solve(vector<int>&nums, int target, int currIdx, map<pair<int,int>,int> &memo){
        
        if(currIdx >= nums.size() && target != 0) return 0;
        
        if(currIdx >= nums.size() && target == 0) return 1;
        
        pair<int,int> currentKey(currIdx,target);
        
        if(memo.find(currentKey) != memo.end()) return memo[currentKey];
        
        int posSign = solve(nums,target - nums[currIdx] , currIdx + 1,memo);
        int negSign = solve(nums,target + nums[currIdx], currIdx + 1,memo);
        
        memo[currentKey] = posSign + negSign;
        return memo[currentKey];
    }
};