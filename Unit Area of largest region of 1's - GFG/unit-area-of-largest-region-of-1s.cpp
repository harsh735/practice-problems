// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    
    
   int res = 0;
   int dfs(int i , int j, vector<vector<int>>&grid){
       
       if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 2 || grid[i][j] == 0)
            return 0;
            
       grid[i][j] = 2;
       res++;
       dfs(i+1,j,grid);
       dfs(i,j+1,grid);
       dfs(i-1,j,grid);
       dfs(i,j-1,grid);
      
       dfs(i+1,j+1,grid);
       dfs(i+1,j-1,grid);
       dfs(i-1,j+1,grid);
       dfs(i-1,j-1,grid);
       return res;
   } 
    
       
   int findMaxArea(vector<vector<int>>& grid) {
       int ans = 0;
       for(int i = 0; i<grid.size(); i++){
           for(int j = 0; j<grid[0].size(); j++){
               res = 0;
               if(grid[i][j] == 1){
                   dfs(i,j,grid);
                   ans = max(ans,res);
               }
           }
       }
       return ans;
   }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends