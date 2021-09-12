class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        //:( 
        
        //did recursive approach for this on pen paper
        int start = 0;
        int end = nums.size();
        
        while(start <= end){
            int mid = (start + end)/2;
            if(target == nums[mid]){
                return mid;
            }
            else if(target < nums[mid]){
                end = mid-1;
            }
            else if(target > nums[mid]){
                start = mid+1;
            }
        }
        return -1;
    }
};