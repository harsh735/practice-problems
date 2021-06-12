class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int diff;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            diff = target - nums[i];
            if(m.find(diff)!=m.end() && m.find(diff)-> second != i)
            {
                v.push_back(m[diff]);
                v.push_back(i);
                return v;
            }
            m[nums[i]]=i;
        }
        return v;
    }
};