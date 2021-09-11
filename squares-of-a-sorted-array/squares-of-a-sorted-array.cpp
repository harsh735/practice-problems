class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        //lol kill me.
        vector<int> ans;
        for(int i =0; i<nums.size(); i++){
            nums[i] = pow(nums[i],2);
            ans.push_back(nums[i]);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};