class Solution {
public:
    int longestPalindromeSubseq(string s) {
        
        //im sorry
        
        vector<vector<int>> memo(s.size(), vector<int>(s.size(), -1));
        string str = s;
        reverse(str.begin(), str.end()); 

        return solve(s,str,0,0,memo);
    }
    
    int solve(string &s, string& str, int i, int j, vector<vector<int>> &memo){
        
        if(i >= s.size() || j>= str.size()) return 0;
        if (memo[i][j] != -1) return memo[i][j];
        
        if(str[i] == s[j]){
            return memo[i][j] = 1 + solve(s,str,i+1,j+1,memo);
        }
        else {
            return memo[i][j] = max(solve(s,str,i,j+1,memo),solve(s,str,i+1,j,memo));
        }
    }
};