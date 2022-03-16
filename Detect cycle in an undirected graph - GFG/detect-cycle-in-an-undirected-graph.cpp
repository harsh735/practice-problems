// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool bfs(int node,int prev, vector<int>adj[], vector<int>&visited){
        
        /*  BFS APPROACH
                    
        queue<pair<int,int>>q;
        q.push({node,-1});
        visited[node] = 1;
        
        while(!q.empty()){
            int curr = q.front().first;
            int prev = q.front().second;
            q.pop();
            
            for(auto it:adj[curr]){
                if(!visited[it]){
                    visited[it] = 1;
                    q.push({it,curr});
                }
                else if(prev != it)
                    return true;
            }
        }
        return false;
        */
        
        //DFS APPROACH
        
        
        visited[node] = 1;
        for(auto it: adj[node]){
            if(visited[it] == 0){
                if(bfs(it,node,adj,visited)) return true;
            }
            else if(it != prev) return true;
        }
        
        return false;
    }
    
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> visited(V + 1,0);
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                if(bfs(i, -1 , adj , visited)) return true;
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends