class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        // ~o~
        
        if(nums.size() == 1) return nums;
        unordered_map<int,int> newNums;
        vector<int> ans;
        for(int i = 0; i < nums.size(); ++i){
            newNums[nums[i]]++;
        }
        for(auto it: newNums){
            if(it.second > (nums.size() / 3)) ans.push_back(it.first);
        }
        return ans;
    }
};