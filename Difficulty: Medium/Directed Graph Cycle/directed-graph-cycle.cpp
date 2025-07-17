class Solution {
  public:
    bool isCyclic(int n, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>>adj(n);
        for(auto x:edges){
            int a = x[0];
            int b = x[1];
            adj[a].push_back(b);
        }
        
        // find the indegree of all the node 
        vector<int>indegre(n,0);
        for(auto x:adj){
            for(auto y:x) indegre[y]++;
        }
        queue<int>q;// to store the order 
        // traverse the loop and find whose  indegree =0 
        vector<int>ans;
        for(int i=0;i<n;i++) if(indegre[i]==0) q.push(i);
        while(!q.empty()){
            int a = q.front();
            ans.push_back(a);
            q.pop();
            for(auto x:adj[a]){
                indegre[x]--;
                if(indegre[x]==0) q.push(x);
            }
        }
        return !(ans.size() == n);
    }
};