class Solution {
public:

    
    int dfs(vector<vector<int>>& grid,int i,int j,vector<vector<bool>>&visited,int&ans){
        int row = grid.size();
        int col = grid[0].size();
        if(i < 0 || j < 0 || i >= row || j >= col || grid[i][j] == 0){
            ans++;
            return 0;
        }
        
        if(visited[i][j]) return 0;

        visited[i][j] = true;
        dfs(grid,i + 1,j,visited,ans);
        dfs(grid,i - 1,j,visited,ans);
        dfs(grid,i,j + 1,visited,ans);
        dfs(grid,i,j - 1,visited,ans);
        return ans;
    }
    
    
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        int ans = 0;
        
        vector<vector<bool>>visited(row,vector<bool>(col,false));
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                if(grid[i][j] == 1){
                    return ans = dfs(grid,i,j,visited,ans);
                }
            }
        }
        return 0;
    }
};