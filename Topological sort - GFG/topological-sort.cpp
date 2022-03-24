// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    //BFS KAHN'S ALGORITHM
	    queue<int> q;
	    vector<int> inDegree(V,0);
	    
	    //maintaining array for indegree of each adjacent node
	    for(int i = 0; i<V; i++){
	        for(auto it: adj[i]){
	            inDegree[it]++;
	        }
	    }
	    
	    //if indegree == 0 , push that node into queue
	    for(int i = 0; i<V; i++){
	        if(inDegree[i] == 0){
	            q.push(i);
	        }
	    }
	    
	    vector<int>ans;
	    //standard bfs
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        //final ans = order of insertion of nodes, so pushing it here
	        ans.push_back(node);
	        
	        for(auto it: adj[node]){
	            inDegree[it]--;
	            if(inDegree[it] == 0)
	                q.push(it);
	        }
	    }
	    return ans;
	    
	    
	   /*  DFS APPROACH
	    vector<int> ans;
	    vector<int> vis(V+1,0);
	    stack<int> st;
	    
	    for(int i = 0; i<V; i++){
	        if(vis[i] == 0){
	            dfs(i,adj,vis,st);
	        }
	    }
	    
	    while(!st.empty()){
	        ans.push_back(st.top()); //transferring all elements of stack to vector ans
	        st.pop();
	    }
	    return ans;
	    */
	    
	}
	
	/*void dfs(int node, vector<int>adj[], vector<int>&vis, stack<int>&st){
	    vis[node] = 1;
	    for(auto it: adj[node]){
	        if(vis[it] == 0){
	            dfs(it,adj,vis,st);
	        }
	    }
	    
	    st.push(node); //once dfs call is over INSERT current node to stack
	}
	*/
};

// { Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}  // } Driver Code Ends