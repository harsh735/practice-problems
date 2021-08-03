class Solution {
public:
    bool isAnagram(string s, string t) {
        int i;
        unordered_map<char, int>newS;
        unordered_map<char, int>newT;
        
        for(i=0; s[i]; i++){
            if(newS.find(s[i]) == newS.end()){
                newS.insert(make_pair(s[i], 1));    
            }
            else {
                newS[s[i]]++;
            }
        }
        
        
        for(i=0; t[i]; i++){
            if(newT.find(t[i]) == newT.end()){
                newT.insert(make_pair(t[i], 1));    
            }
            else {
                newT[t[i]]++;
            }
        }
        
        
        if(newS == newT){
            return true;
        }
        else {
            return false;
        }
        
       
    }
};