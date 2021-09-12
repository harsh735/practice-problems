class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
       
        // ://
        
        int start =0;
        int end = 0; 
        int ans =0, prev_count =0;
        while(end < nums.size()){
            if(left <= nums[end]  &&  nums[end]<= right){
              prev_count = end- start +1;
              ans += prev_count;
            }else if (  nums[end] < left){
                 ans += prev_count;
            }else{
                start = end +1;
                prev_count =0;
            }
            end++;
       }
      return ans;
    }
};