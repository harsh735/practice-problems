class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int ,int> ans;
        int newAns;
        for(int i =0; i<nums.size(); i++){
            ans[nums[i]]++;
        }
        
        for(auto it: ans){
            if(it.second == 1){
                return newAns = it.first;   
            }
        }
        return 0;
    }
};