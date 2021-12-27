class Solution {
public:
    int memo[2600][2600];
    int lengthOfLIS(vector<int>& nums) {
        
        memset(memo,-1,sizeof(memo));
        if(nums.size() == 0) return 0;
        return solve(nums,0,-1);
    }
    
    int solve(vector<int>&nums, int currIdx, int prev) {
        
        if(currIdx >= nums.size()) return 0;
        
        if(prev != -1 && memo[currIdx][prev] != -1) return memo[currIdx][prev];
        int consider = 0;
        if(prev == -1 || nums[currIdx] > nums[prev]) 
           consider = 1 + solve(nums,currIdx + 1,currIdx);
        
        int notConsider = solve(nums,currIdx + 1,prev);
        if(prev != -1) memo[currIdx][prev] = max(consider,notConsider);
        return max(consider,notConsider);
    }
};