class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        
        unordered_map<char,int> ans;
        int count=0;
        
        for(int i=0;i<brokenLetters.size();i++)
            ans[brokenLetters[i]]++;
        
        bool ok=true;
        for(int i=0;i<text.size();i++){
            if(text[i]==' ')
                if(ok)
                count++;
            else
                ok=true;
            
            else{
                if(ans.find(text[i])!=ans.end())
                    ok=false;
            }
        }
        if(ok)
            count++;
        return count;
    }
};