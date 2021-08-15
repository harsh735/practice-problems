class Solution {
public:
    int singleNumber(vector<int>& nums) {
     
        unordered_map<int, int> newNums;
        int ans;
        
        for(int i =0; i<nums.size(); i++){
            newNums[nums[i]]++;
        }
        
        for(auto it: newNums){
            if(it.second == 1){
                return ans = it.first;
            }
        }
        return 0;
    }
};