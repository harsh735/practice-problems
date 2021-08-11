class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map <int,int> newNums;
        
        int j = nums.size() - 1;
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            
            if(newNums.find(nums[i]) == newNums.end()){
                newNums.insert(make_pair(nums[i],i));
            }
            else {
                if(i - newNums[nums[i]] <= k){
                    return true;   
                }
                else {
                    newNums[nums[i]] = i;
                }
            }

        }
        return false;
    }
};