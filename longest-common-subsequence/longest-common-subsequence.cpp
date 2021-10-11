class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        //◉_◉
        
        map<pair<int,int>,int> memo;
        int n = text1.size();
        int m = text2.size();
        return solve(text1,text2,n,m,0,0,memo);
    }
    
    int solve(string& text1, string& text2, int n, int m, int i, int j, map<pair<int,int>,int> &memo){
       
        if(i == n || j == m) return 0;
        
        if(memo.count(make_pair(i,j)) == 1) return memo[make_pair(i,j)];
        
        if(text1[i] == text2[j]) 
            return memo[make_pair(i,j)] = 1 + solve(text1,text2,n,m,i+1,j+1,memo);
            
        else 
            return memo[make_pair(i,j)] = max(solve(text1,text2,n,m,i+1,j,memo),solve(text1,text2,n,m,i,j+1,memo)); 
    }
};