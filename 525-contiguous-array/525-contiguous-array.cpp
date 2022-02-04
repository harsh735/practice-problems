class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int ans = 0;
        int maxi = 0;
        unordered_map<int,int> mp; 
        mp.insert(make_pair(0,-1));
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1) ans++;
            else ans--;
            
            if(mp.find(ans) != mp.end())
                maxi = max(maxi,i - mp[ans]);
            else
                mp.insert(make_pair(ans,i));
        }
        
        return maxi;
    }
};


 /*brute force 
        
        int maxi = 0, one = 0, zero = 0;
        int ans = 0;
        for(int i = 0; i<nums.size(); i++){
            for(int j = i; j<nums.size(); j++){
                if(nums[j] == 1) one++;
                else zero++;
                
                if(one == zero){
                    maxi = one + zero;
                    ans = max(ans,maxi);
                }
            }
            one = 0;
            zero = 0;
        }
        return ans;
*/