// User function Template for C++
class Solution {
  public:
  
    void dfs(int start, vector<vector<pair<int, int>>> &adj,vector<int>&vis,stack<int>&s){
        
        vis[start]=1;
        for(auto x:adj[start]){
            int a = x.first;
            if(!vis[a]) dfs(a,adj,vis,s);
        }
        s.push(start);
        
    }
    
    vector<int> shortestPath(int n, int e, vector<vector<int>>& edges) {
        
        // creating a adjency list 
        vector<vector<pair<int,int>>>adj(n);
        for(auto x:edges){
            int a = x[0] , b = x[1] , c = x[2];
            adj[a].push_back({b,c});
        }
        
        
        // create a visited array 
        vector<int>vis(n,0);
        stack<int>s;
        for(int i=0;i<n;i++){
            if(!vis[i]) dfs(i,adj,vis,s);
        }
        
        vector<int>dist(n,INT_MAX);
        dist[0]=0;
        
        
        // Step 4: Process nodes in topological order
        while (!s.empty()) {
            int node = s.top();
            s.pop();
    
            if (dist[node] != INT_MAX) {
                for (auto &x : adj[node]) {
                    int v = x.first;
                    int wt = x.second;
    
                    if (dist[node] + wt < dist[v]) {
                        dist[v] = dist[node] + wt;
                    }
                }
            }
        }
    
        // Optional: Replace INT_MAX with -1 to indicate unreachable
        for (int i = 0; i < n; i++) {
            if (dist[i] == INT_MAX)
                dist[i] = -1;
        }
    
        return dist;
        
        
    }
};
