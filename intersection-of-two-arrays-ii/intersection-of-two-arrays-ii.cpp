class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        if(nums2.size() > nums1.size()){
            intersect(nums2,nums1);
        }
        unordered_map<int,int> newNums;
        vector<int> ans;
        
        for(int i =0; i<nums1.size(); i++){
            newNums[nums1[i]]++;
        }
        
        for(int i=0; i<nums2.size(); i++){
            if(newNums.find(nums2[i]) != newNums.end() && newNums[nums2[i]] > 0){
                ans.push_back(nums2[i]);
                newNums[nums2[i]]--;
            }
        }
    
        return ans;
    }
};