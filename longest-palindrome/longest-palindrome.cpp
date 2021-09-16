class Solution {
public:
    int longestPalindrome(string s) {
        
        
        //BOB 
        
        //the formula is basically to add up all the even chars
        //and take (sum of odd chars) - 1 to equally divide them
        //and then we add one to the total sum if there is atleast 1 odd present
        
        
        
        
        
        if(s.length() == 1){
            return 1;
        }
        
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