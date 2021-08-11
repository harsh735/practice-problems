class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        unordered_set<int> newNums;
        
        for(int i =0; i<nums.size(); i++){
            newNums.insert(nums[i]);
        }
        
        vector<int> newAns;
        
        for(int i =1; i<=nums.size(); ++i){
            
            if(newNums.find(i) == newNums.end()){
                cout<<i;
                newAns.push_back(i);
            }
        }
        
        return newAns;
    }
};