class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int ans = 0,sum = 0;
        unordered_map<int,int> mp;
        mp[0] = 1;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            int key = sum - k;
            
            if(mp.find(key) != mp.end()){
                ans += mp[key];
            }
            
            mp[sum]++;
        }
        return ans;
    }
};