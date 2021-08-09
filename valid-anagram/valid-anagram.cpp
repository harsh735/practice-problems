class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int i;
        unordered_map<char,int> newS , newT;
        
        for (int i = 0; s[i]; i++){
            if(newS.find(s[i]) == newS.end()){
                newS.insert(make_pair(s[i], 1));
            }
            else {
                newS[s[i]]++;
            }
        }   
    
        for(int i=0; t[i]; i++){
            if(newT.find(t[i]) == newT.end()){
                newT.insert(make_pair(t[i], 1));
            }
            else {
                newT[t[i]]++;
            }
        }
        return newS == newT ? true : false;
    
    }
};