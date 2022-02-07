class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() <= 2) return nums.size();
        unordered_map<int,int> mp;
        int j = 0;
        for(int i = 0; i<nums.size(); i++){ 
            mp[nums[i]]++;
            if(mp[nums[i]] <= 2){
                nums[(j++)] = nums[i];
            }
        }
        return j;
    }
};