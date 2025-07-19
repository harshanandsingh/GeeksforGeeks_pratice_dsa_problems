class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        //step 1: create adjency list 
        vector<vector<pair<int,int>>>adj(n+1);
        for(auto x : edges){
            int a = x[0];
            int b = x[1];
            int c = x[2];
            
            adj[a].push_back({b,c}); // a -> b with dis c 
            adj[b].push_back({a,c}); // b -> a with dis c 
        }
        
        // step 2: create visited array -> store distance and parent 
        vector<pair<int,int>>dis(n+1,{INT_MAX,-1}); // with infinity and not parent 
        dis[1] = {0,-1};
        // step 3: create priority queue to store -> smaller distance first to compite 
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        // push the starting node -> 1 with the distance 0 
        pq.push({0,1});
        
        while(!pq.empty()){
            
            int node = pq.top().second;
            int wt = pq.top().first;
            pq.pop();
            
            // now is dis is less then update all distance and add in pq 
            for(auto x:adj[node]){
                int a_node = x.first;
                int d = x.second;
                
                if(d + wt < dis[a_node].first){
                    dis[a_node].first = d+wt ; // add updated distance 
                    dis[a_node].second = node; // add parent node 
                    pq.push({d+wt,a_node});
                }
            }
        }
        
        // check we can reach the last node , if not return -1
        if(dis[n].first == INT_MAX) return {-1};
        
        // now for hear we reached the last node 
        vector<int>ans;
        ans.push_back(n);
        int j = n;
        while(dis[j].second != -1){
            ans.push_back(dis[j].second);
            if(dis[j].second != -1) j= dis[j].second;
        }
        ans.push_back(dis[n].first);
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};