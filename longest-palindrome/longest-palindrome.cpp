class Solution {
public:
    int longestPalindrome(string s) {
        
        if(s.length() == 1){
            return 1;
        }
        
        //BOB ;-;
        unordered_map<char , int> str;
        
        for(int i = 0; i<s.length(); i++){
            str[s[i]]++;
        }
        bool odd_found = false;
        int ans = 0;
        
        for(auto it: str){
            if(it.second % 2 == 0){
                ans += it.second;
            }
            else {
                odd_found = true;
                ans += it.second - 1;
            }
        }
        if(odd_found)
            ans++;
        return ans;
    }
};