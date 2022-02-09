class Solution {
public:
    int area = 0;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        int ans = 0;
        
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                if(grid[i][j] == 1){
                    area = 0;
                    dfs(grid,i,j);
                    ans = max(ans,area);
                }
            }
        }
        return ans;
    }
    
    void dfs(vector<vector<int>>&grid,int i, int j){
        int row = grid.size();
        int col = grid[0].size();
        if(i < 0 || j < 0 || i>=row || j>=col || grid[i][j] != 1)
            return;
        
        area++;
        grid[i][j] = 2;
        
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
};