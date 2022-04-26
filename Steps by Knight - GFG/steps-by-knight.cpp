// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    int x1 = KnightPos[0];
	    int y1 = KnightPos[1];
	    int x2 = TargetPos[0];
	    int y2 = TargetPos[1];
	    
	    queue<pair<int,int>> q;
	    vector<vector<int>> visited(N,vector<int>(N,0));
	    visited[x1-1][y1-1] = 0;
	    q.push({x1-1,y1-1});
	    
	    while(!q.empty()){
	        int i = q.front().first;
	        int j = q.front().second;
	        q.pop();
	        
	        if((i+1) >= 0 && (i+1) < N && (j+2) >= 0 && (j+2) < N && visited[i+1][j+2] == 0){
	            visited[i+1][j+2] = visited[i][j] + 1;
	            q.push({i+1,j+2});
	        }
	        if((i-1) >= 0 && (i-1) < N && (j+2) >= 0 && (j+2) < N && visited[i-1][j+2] == 0){
	            visited[i-1][j+2] = visited[i][j] + 1;
	            q.push({i-1,j+2});
	        }
	        
	        if((i-1) >= 0 && (i-1) < N && (j-2) >= 0 && (j-2) < N && visited[i-1][j-2] == 0){
	            visited[i-1][j-2] = visited[i][j] + 1;
	            q.push({i-1,j-2});
	        }
	        
	        
	        if((i+1) >= 0 && (i+1) < N && (j-2) >= 0 && (j-2) < N && visited[i+1][j-2] == 0){
	            visited[i+1][j-2] = visited[i][j] + 1;
	            q.push({i+1,j-2});
	        }
	        
	        
	        if((i+2) >= 0 && (i+2) < N && (j-1) >= 0 && (j-1) < N && visited[i+2][j-1] == 0){
	            visited[i+2][j-1] = visited[i][j] + 1;
	            q.push({i+2,j-1});
	        }
	        
	        
	        if((i-2) >= 0 && (i-2) < N && (j-1) >= 0 && (j-1) < N && visited[i-2][j-1] == 0){
	            visited[i-2][j-1] = visited[i][j] + 1;
	            q.push({i-2,j-1});
	        }
	        
	        
	        if((i+2) >= 0 && (i+2) < N && (j+1) >= 0 && (j+1) < N && visited[i+2][j+1] == 0){
	            visited[i+2][j+1] = visited[i][j] + 1;
	            q.push({i+2,j+1});
	        }
	        
	        
	        if((i-2) >= 0 && (i-2) < N && (j+1) >= 0 && (j+1) < N && visited[i-2][j+1] == 0){
	            visited[i-2][j+1] = visited[i][j] + 1;
	            q.push({i-2,j+1});
	        }
	        
	        
	    }
	    return visited[x2-1][y2-1];
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends