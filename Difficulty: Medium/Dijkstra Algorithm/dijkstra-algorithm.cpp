// User Function Template
class Solution {
  public:
    vector<int> dijkstra(int n, vector<vector<int>> &edges, int src) {
        // Code here
        // create the adjency list 
        vector<vector<pair<int,int>>>adj(n);
        for(auto x:edges){
            int a = x[0];
            int b = x[1];
            int c = x[2];
            adj[a].push_back({b,c});
            adj[b].push_back({a,c});
        }
        
        // crate a priority queue -> distance , node min 
        // we can use priority queue as well set data structure as well 
        // priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;
        set<pair<int,int>>pq;
        
        // crate a distance array and assingn to infinity 
        vector<int>dis(n,INT_MAX);
        
        // distance of starting node will be 0 
        dis[src]=0;
        
        // push in priority queue 
        // pq.push({0,src});
        pq.insert({0,src});
        
        while(!pq.empty()){
            // int node = pq.top().second;
            // int wt = pq.top().first;
            // pq.pop();
            
            
            // Step 5: Get node with smallest distance
            auto it = *(pq.begin());
            pq.erase(pq.begin());
    
            int wt = it.first;
            int node = it.second;
            
            // now find all the node which are adjesent to  node 
            for(auto x:adj[node]){
                int a = x.first;// node 
                int b = x.second;//weight to reach that node 
                
                if(wt+b < dis[a]){
                    dis[a]=wt+b;
                    // pq.push({wt+b,a});
                    pq.insert({wt+b,a});
                }
                
            }
        }
        
        return dis;
        
        
        
    }
};