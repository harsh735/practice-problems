class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        //NEW CONCEPT LETS GOOOOOQUACKKK
        priority_queue <int> ans;
        
        
        //add first k elements in min heap using -ve sign
        
        for(int i = 0; i<k; i++){
            ans.push(-nums[i]);
        }
        
        //if elements after k > current top val then pop current top and add the current num
        for(int i = k; i<nums.size(); i++){
            if(nums[i] > -ans.top()){
                ans.pop();
                ans.push(-nums[i]);
            }
        } 

        return -ans.top(); 
    }
};