class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> ans;
        for(int i =0; i<magazine.length(); i++){
            ans[magazine[i]]++;
        }
        for(int i =0; i<ransomNote.length(); i++){
            if(ans[ransomNote[i]] == 0){
                return false;  
            }
             --ans[ransomNote[i]];
        }
        return true;
        
    }
};