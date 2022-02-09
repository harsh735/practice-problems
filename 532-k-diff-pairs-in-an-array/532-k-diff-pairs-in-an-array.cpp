class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        int ans = 0;
        set<pair<int,int>> temp;
        for(int i = 0; i<nums.size(); i++){
            for(int j = i + 1; j<nums.size(); j++){
                if(abs(nums[i] - nums[j]) == k){
                    if(nums[i] > nums[j])
                        temp.insert({nums[i],nums[j]});
                    else
                        temp.insert({nums[j],nums[i]});
                }
            }
        }
        return temp.size();
    }
};