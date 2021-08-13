class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> newNums;
        unordered_set<int> ansSet;
        vector<int> ans;
        
        for(int i =0; i<nums1.size(); i++){
            newNums.insert(nums1[i]);
        }
        
        for(int i =0; i<nums2.size(); i++){

                if(newNums.find(nums2[i]) != newNums.end()){
                    ansSet.insert(nums2[i]);
                }
        }
        
        for(auto it: ansSet){
            ans.push_back(it);
        }
        return ans;
        
    }
};