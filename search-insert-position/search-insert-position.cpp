class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i,n = nums.size();
        int j = nums.size() - 1;
        for(i = 0; i < n; i++)
        {
            if(nums[i] >= target){return i;}
        }
        return nums.size();
    }
};