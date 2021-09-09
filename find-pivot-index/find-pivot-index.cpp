class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //DUCKIE DUCK DUCK :3 :D
        
        int lsum = 0;
        int totalSum = 0;
        
        for(int i =0; i<nums.size(); i++){
            totalSum += nums[i];
        }
        int rsum = totalSum;
        
        for(int i = 0; i<nums.size(); i++){
            rsum = rsum - nums[i]; 
            if(lsum == rsum){
                return i;
            }
            
            lsum += nums[i];
        }
        return -1;
    }
};