class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        // o,o
        
        unordered_set<int> ans;
        for(int i =0; i<nums.size(); i++){
            ans.insert(nums[i]);
        }
        
        int longestStreak = 0;
        for(int it: ans){
            
            if(!ans.count(it - 1)){
                int currentNum = it;
                int currentStreak = 1;
            
                while(ans.count(currentNum+1)){
                    currentNum += 1;
                    currentStreak += 1;
                }
                
                longestStreak = max(longestStreak, currentStreak);
            }
        }
        
        return longestStreak;
    }
};