class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        
        int n = adj.size();
        
        vector<int>vis(n,0);
        vector<int>dis(n,-1);
        
        // add the starting vertex in the  queue , mark it as visited , and add the distance 
        queue<int>q;
        q.push(src);
        vis[src]=1;
        dis[src]=0;
        
        // do bfs traversal 
        while(!q.empty()){
            int a = q.front();
            q.pop();
            for(auto x : adj[a]){
                if(!vis[x]){
                    vis[x]=1;
                    dis[x]=dis[a]+1;
                    q.push(x);
                }
            }
        }
        
        return dis;
        
    }
};