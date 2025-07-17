class Solution {
  public:
    void dfs(int start,vector<int>&vis,vector<vector<int>>&adj, stack<int>&s){
    
        vis[start]=1;
        for(auto x:adj[start]){
            if(!vis[x]){
                dfs(x,vis,adj,s);
            }
        }
        s.push(start);
    }
    vector<int> topoSort(int n, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>>adj(n);
        for(auto x:edges){
            int a = x[0];
            int b = x[1];
            adj[a].push_back(b);
            // v[b].push_back(a);
        }
        vector<int>vis(n,0);
        stack<int>s;
        for(int i=0;i<n;i++){
            if(!vis[i]) dfs(i,vis,adj,s);
        }
        vector<int>res;
        for(int i=0;i<n;i++){
            res.push_back(s.top());
            s.pop();
        }
        return res;
        
    }
};