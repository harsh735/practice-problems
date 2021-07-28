class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
            
        for(int k =0; k<s.length(); k++){
             if((s[k]>='a' && s[k]<='z') || (s[k]>='A' && s[k]<='Z') || (s[k]>='0' && s[k]<='9'))
                str+=tolower(s[k]);
        }
        
        int i =0; 
        int j = str.length() - 1;
        
        while(i<j){
            if(str[i] == str[j]){
                i++;
                j--;
            }
            else {
                return false;
            }
        }
        return true;
    }
};