class Solution {
public:
    
      int longestIncreasingPath(vector<vector<int>>& matrix) {
          
        // ch00sing a sticker o,o  
          
        int m=matrix.size();
        int n=matrix[0].size();
        
        vector<vector<int>> memo(m+1,vector<int>(n+1,-1));
        int ans=INT_MIN;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                int temp=solve(matrix,i,j,m,n,-1,memo);
                ans = max(ans,temp);
            }
        }
        
        return ans;
        
    }
    
    
    int solve(vector<vector<int>>& matrix,int currRow,int currCol,int m,int n,int prev,vector<vector<int>> &memo) {
        
        if(currRow < 0 || currCol< 0 || currRow >= m || currCol >= n) return 0;
        
        if(matrix[currRow][currCol] <= prev) return 0;
        
        if(memo[currRow][currCol] != -1) return memo[currRow][currCol];
        
        int left = 1 + solve(matrix,currRow,currCol-1,m,n,matrix[currRow][currCol],memo);
        int up = 1 + solve(matrix,currRow - 1,currCol,m,n,matrix[currRow][currCol],memo);
        int right = 1 + solve(matrix,currRow,currCol+1,m,n,matrix[currRow][currCol],memo);
        int down = 1 + solve(matrix,currRow+1,currCol,m,n,matrix[currRow][currCol],memo);
    
        return memo[currRow][currCol] = max(left,max(up,max(right,down)));
    }
  
};