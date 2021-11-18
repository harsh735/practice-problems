class Solution {
public:
    int firstPos(vector<int>& nums,int target) {
        
        int start = 0,end = nums.size()-1;
        int ans = -1;
        
        while(start <= end) {
            
            int mid = start + (end - start)/2;
            if(nums[mid] == target) {
                ans = mid;
                end = mid-1;
            }
            else if(nums[mid]<target) start = mid+1;
            else end = mid - 1;
        }
       return ans; 
    }
    
    int lastPos(vector<int>& nums,int target) {
        
        int start = 0,end = nums.size()-1;
        int ans = -1;
        
        while(start <= end) {
            
            int mid = start + (end - start)/2;
            if(nums[mid] == target) {
                ans = mid;
                start = mid + 1;
            }
            else if(nums[mid]<target) start = mid+1;
            else end = mid - 1;
        }
       return ans; 
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstPos(nums,target);
        int last = lastPos(nums,target);
        
        if(first == -1 && last == -1 or nums.size()==0) return {-1,-1};
        return {first,last};
    }
};