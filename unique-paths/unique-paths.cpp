class Solution {
public:
    int uniquePaths(int m, int n) {
        
        unordered_map<string,int> memo = {};
        return solve(m,n,1,1,memo);
    }
    
    int solve(int m,int n, int currX, int currY, unordered_map<string,int>&memo) {
        
        if(currX == m && currY == n) return 1;

        string currentKey = to_string(currX) + ";" + to_string(currY);
        if(memo.find(currentKey) != memo.end()) return memo[currentKey];
        
        int down = 0;
        int right = 0;
        if(currX <= m && currY <= n) {
            down = solve(m,n,currX + 1,currY,memo);
            right = solve(m,n,currX,currY + 1,memo);
        }
        return memo[currentKey] = down + right;
    }
};