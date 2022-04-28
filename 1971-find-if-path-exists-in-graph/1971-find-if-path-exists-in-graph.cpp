class Solution {
public:
    
    bool dfs(vector<int> adj[], int source, int destination, vector<bool>&visited){
        
        visited[source] = true;
        if(source == destination) return true;
        
        for(auto it: adj[source]){
            if(!visited[it]){
                bool ans = dfs(adj,it,destination,visited);
                if(ans) return true;
            }
        }
        return false;
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<int> adj[n];
        
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<bool> visited(n, false);
        
        return dfs(adj, source, destination, visited);
    }
    
};