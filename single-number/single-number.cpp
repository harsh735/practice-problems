class Solution {
public:
    int singleNumber(vector<int>& nums) {
     
        if(nums.size() > 1){
            sort(nums.begin(), nums.end());
            for(int i = 0; i<nums.size(); i++){
                if(nums[i] != nums[i+1]){
                     return nums[i];
                }
            
                i++;
            }
        
        }
        
        else if(nums.size() < 1) {
            return 0;
        }
        
        return nums[0];
        
    }
};