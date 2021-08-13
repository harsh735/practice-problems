class Solution {
public:
    bool areOccurrencesEqual(string s) {
        
        unordered_map<char, int> ans;
        int count = 0;
        for(int i =0; i<s.length(); i++){
            ans[s[i]]++;
            
            if(s[i] == s[0]){
                count+=1;
            }
        }    
        for(auto it: ans){
            if(it.second != count)
                return false;
        }
        return true;
    }
};