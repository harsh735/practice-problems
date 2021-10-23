class Solution {
public:
    
    int memo[201][201];
    
    int minPathSum(vector<vector<int>>& grid) {
        
        // panda sends hearts ~O~
        
        
        memset(memo , -1 , sizeof(memo));
        return solve(grid,0,0);
    }
    
    int solve(vector<vector<int>>& grid , int currX , int currY)
    {
        if(currX > grid.size()-1 || currY > grid[0].size()-1) return INT_MAX;
        
        if(memo[currX][currY]!=-1) return memo[currX][currY];
        
        if(currX == grid.size()-1 && currY == grid[0].size()-1) return memo[currX][currY] = grid[currX][currY];
        
        return memo[currX][currY] = grid[currX][currY] + min(solve(grid , currX + 1 ,currY), 
                                                             solve(grid , currX , currY+1));
    }
    
};