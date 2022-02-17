class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        //TC O(N) || SC O(N)
        vector<int> ans;
        unordered_set<int> s;
        for(int i = 0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        for(int i = 1; i<=nums.size(); i++){
            if(s.count(i) == 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};