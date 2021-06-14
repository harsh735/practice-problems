class Solution {
public:
    bool isValid(string s) {
        int i;
        vector<char> v;
        int n = s.size();
        for(i = 0; i < n; i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                v.push_back(s[i]);
            }
            
            if(s[i] == ']' || s[i] == '}' || s[i] == ')' )
            {
                if(v.empty())
                {
                    return false;
                }
                if(s[i] == ')')
                {
                    if(v.back() == '(')
                        v.pop_back();
                    else 
                        return false;
                }    
                    
                if(s[i] == ']')
                {
                    if(v.back() == '[')
                        v.pop_back();
                    else 
                        return false;
                }
                    
                if(s[i] == '}')
                {
                    if(v.back() == '{')
                        v.pop_back();
                    else 
                        return false;
                }
            }
        }
        if(v.empty())
        {
            return true;
        }
        else
            return false;
    }
};