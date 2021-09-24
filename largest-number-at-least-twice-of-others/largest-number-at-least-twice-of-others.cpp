class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        //:3
        unordered_map<int,int> ans;
        if(nums.size() == 1) return 0;
        
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]=i;
        }
            
        sort(nums.begin(),nums.end());
        
        if((nums[nums.size()-2]*2)<=nums[nums.size()-1])
            return ans[nums[nums.size()-1]];
        else
            return -1;
    }
};