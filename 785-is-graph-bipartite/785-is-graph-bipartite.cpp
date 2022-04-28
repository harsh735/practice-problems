class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        int color[n];
        memset(color, -1, sizeof(color));
        for(int i = 0; i<n; i++){
            if(color[i] == -1){
                if(!bfs(i,graph,color))
                    return false;
            }
        }
        return true;
    }
    
    
    bool bfs(int node, vector<vector<int>>& graph, int color[]){
        
        queue<int> q;
        q.push(node);
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(auto it: graph[node]){
                if(color[it] == -1){
                    color[it] = 1 - color[node];
                    q.push(it);
                }
                else if(color[it] == color[node]) return false;
            }
        }
        
        return true;
    
    }
};