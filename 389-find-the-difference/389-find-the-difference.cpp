class Solution {
public:
    char findTheDifference(string s, string t) {
        
        if(s.length() == 0 && t.length() == 0)
            return '\0';
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        char temp;
        for(int i = 0; i<t.length(); i++){
            if(s[i] != t[i]){
                return t[i];
            }
        }
        return t[t.length()];
    }
};