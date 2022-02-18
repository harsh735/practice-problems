class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        if(nums.size() == 0) return {};
        vector<int> ans;
        map<int,int> mp;
        for(int i = 0; i<nums.size(); i++)
            mp[nums[i]]++;
        
        for(auto it: mp){
            if(it.second > 1)
                ans.push_back(it.first);
        }
        return ans;
    }
};