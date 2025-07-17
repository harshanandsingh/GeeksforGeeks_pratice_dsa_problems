class Solution {
  public:
    bool bfs(vector<vector<int>>&adj,int start,vector<int> &vis){
        
        vis[start]=1;
        
        queue<pair<int,int>>q;
        q.push({start,-1});
        
        while(!q.empty()){
            
            int a = q.front().first;
            int b = q.front().second;
            q.pop();
            
            for(auto x:adj[a]){
                if(!vis[x]){
                    q.push({x,a});
                    vis[x]=1;
                }
                else if(x != b) return true;
            }
        }
        return false;
        
        
    }
    bool isCycle(int v, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>>adj(v);
        
        // for(auto x:edges){
        //     for(auto [a,b]:x){
        //         v[a].push_back(b);
        //         v[b].push_back(a);
        //     }
        // }
        
        for (auto x : edges) {
            int a = x[0], b = x[1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        
        vector<int> vis(v, 0);
        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                if (bfs(adj, i, vis)) return true;
            }
        }
        
        return false;
        
    }
};