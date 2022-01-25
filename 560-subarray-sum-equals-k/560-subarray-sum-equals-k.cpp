class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        //:3
        int ans =0;
        int sum =0;
        unordered_map<int,int> newNums;
        for(int i =0; i<nums.size(); i++){
            sum += nums[i];
            
            if(sum==k)
                ans++;
            
            if(newNums.find(sum-k) != newNums.end())
                ans += newNums[sum-k];
                
            newNums[sum]++;
        }
        return ans;
    }
};