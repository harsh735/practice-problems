class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        // .
        
        int sum = 0;
        for(int i =0; i<nums.size(); i++){
            sum += nums[i];
        }
        if(sum % 2 != 0) return false;
        
        map<pair<int,int>,int> memo = {};
        return solve(nums,0,sum/2,memo);
    }
    
    bool solve(vector<int>&nums, int currIdx, int target, map<pair<int,int>,int> &memo){
        
        if(currIdx >= nums.size() && target != 0) return false;
        else if(currIdx >= nums.size()  && target == 0) return true;
        
        pair<int,int> currentKey(currIdx,target);
        if(memo.find(currentKey) != memo.end()){
            return memo[currentKey];
        }
        
        bool consider = false;
        bool notConsider = false;
        if(target >= nums[currIdx]){
            consider = solve(nums,currIdx + 1, target - nums[currIdx], memo);
        }
        
        if(consider == true) return true;
        
        else notConsider = solve(nums,currIdx+1,target,memo);
       
        memo[currentKey] = consider || notConsider;
        return memo[currentKey];
    }
};