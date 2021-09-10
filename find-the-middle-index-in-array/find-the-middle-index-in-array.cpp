class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        //BOB BOBO BOB BOB ;-;
        
        int sum = 0;
        int lsum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
        }
        int rsum = sum;
        for(int i=0;i<nums.size();i++)
        {
            rsum = rsum - nums[i];
            if(lsum == rsum)
                return i;
            lsum += nums[i];
        }
        return -1;
    }
};