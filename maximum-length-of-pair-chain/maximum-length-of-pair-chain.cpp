class Solution {
public:
    
    int memo[1002][1002];
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        memset(memo,-1,sizeof(memo));
        return solve(pairs,0,-1);
    }
    
    int solve(vector<vector<int>>&pairs, int currIdx, int endPoint) {
        
        if(currIdx >= pairs.size()) return 0;
        
        if(endPoint != -1 && memo[currIdx][endPoint] != -1) return memo[currIdx][endPoint];
        
        int consider = 0;
        if(endPoint == -1 || pairs[currIdx][0] > pairs[endPoint][1] ){
            consider = 1 + solve(pairs,currIdx + 1,currIdx);
        }
        int notConsider = solve(pairs,currIdx + 1,endPoint);
        if(endPoint != -1) return memo[currIdx][endPoint] = max(consider,notConsider);
        return max(consider,notConsider);
    }
};