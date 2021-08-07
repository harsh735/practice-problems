class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> newNums;
        
        for(int i =0; i<nums.size(); i++){
            newNums[nums[i]]++;
        }
        
        for(auto it: newNums){
            if(it.second >= 2){
                return true;
            }
        }
        return false;
    }
};