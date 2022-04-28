// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    
    bool dfs(int i ,int j, vector<vector<int>>&grid){
        if(i >= grid.size() || i < 0 || j >= grid[0].size() || j < 0 || grid[i][j] == 0 )
            return false;
            
        if(grid[i][j] == 2) return true;
        grid[i][j] = 0;
        bool found = dfs(i+1,j,grid) ||
                     dfs(i-1,j,grid) ||
                     dfs(i,j+1,grid) ||
                     dfs(i,j-1,grid);
        
        return found;
    }
    
    
    
    
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int row = grid.size();
        int col = grid[0].size();
        
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                if(grid[i][j] == 1){
                    return dfs(i,j,grid);
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends