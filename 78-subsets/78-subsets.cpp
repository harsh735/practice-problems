class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back({});
        
        for(auto number:nums){
            int n = ans.size();
            
            for(int i=0;i<n;i++){
                vector<int> subset = ans[i];
                subset.push_back(number);
                ans.push_back(subset);
            }
        }
        
        return ans;
    }
};