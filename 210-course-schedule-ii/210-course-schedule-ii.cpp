class Solution {
public:
    
    bool dfs(int u, vector<vector<int>>& graph, vector<int>& ans, vector<int>& visited){
        visited[u] = 1;
        for(int v : graph[u]){
            if(visited[v] == 1) return true;
            if(visited[v] == 0 && dfs(v, graph, ans, visited)) return true;
        }
        visited[u] = 2;
        ans.push_back(u);
        return false;
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int> ans(0);
        vector<vector<int>> graph(numCourses);
        for(vector<int>& courses: prerequisites)
            graph[courses[1]].push_back(courses[0]);
        
        vector<int> visited(numCourses, 0);
        for(int i = 0; i < numCourses; ++i)
            if(visited[i] == 0 && dfs(i, graph, ans, visited)) return {};
        reverse(ans.begin(), ans.end());
        return ans;
    }
};