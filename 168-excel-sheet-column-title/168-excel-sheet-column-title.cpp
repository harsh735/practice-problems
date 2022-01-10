class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string ans = "";
        while(columnNumber){
            char last = (columnNumber - 1)%26 + 'A';
            ans = last + ans;
            columnNumber = (columnNumber - 1)/26;
        }
        return ans;
    }
};