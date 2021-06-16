class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i,n = nums.size();
        int j = 0;
        
        if(n==0){
            return 0;
        }
        
        for(i = 0; i<n; i++){
            if(nums[i] != val)
            {
                nums[j++] = nums[i];
            }
        }
       return j;
    }
};