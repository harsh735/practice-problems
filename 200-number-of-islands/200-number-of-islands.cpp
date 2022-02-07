class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        int ans = 0;
                
        vector<vector<bool>>visited(row,vector<bool>(col,false));
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                if(grid[i][j] == '1' && visited[i][j] == false){
                    dfs(grid,i,j,visited);
                    ans++;
                }
            }
        }
        return ans;
    }
    
    
    void dfs(vector<vector<char>>&grid, int i, int j,vector<vector<bool>>&visited) {
        
        int row = grid.size();
        int col = grid[0].size();
        if(i < 0 || j < 0 || i >= row || j >= col || 
           visited[i][j] || grid[i][j] == '0')
                return;
    
        visited[i][j] = true;
        dfs(grid,i + 1,j,visited);
        dfs(grid,i - 1,j,visited);
        dfs(grid,i,j + 1,visited);
        dfs(grid,i,j - 1,visited);
    }
};