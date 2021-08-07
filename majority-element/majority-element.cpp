class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int , int> newNums;
        
        for(int i = 0; i<nums.size(); i++){
            if(newNums.find(nums[i]) == newNums.end()){
                newNums.insert(make_pair(nums[i], 1));
            }
            else {
                newNums[nums[i]]++;
            }
        }
                               
        for(auto it: newNums){
            if(it.second > (nums.size()/2)){
                return it.first;
            }
        }
        
        return 0;
    }
};