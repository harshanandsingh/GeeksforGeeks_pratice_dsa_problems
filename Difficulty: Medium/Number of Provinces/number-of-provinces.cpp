//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    void traverse(int start,vector<vector<int>> adj,vector<int>&vis,int n){
        queue<int>q;
        q.push(start);
        vis[start]=1;
        while(!q.empty()){
            int a = q.front();
            q.pop();
            for(auto x : adj[a]){
               if(!vis[x] ){
                   q.push(x);
                   vis[x]=1;
               }
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int v) {
        // code here
        
        vector<vector<int>>adjlist(v);
        
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(adj[i][j] && i!=j){
                    adjlist[i].push_back(j);
                    adjlist[j].push_back(i);
                }
            }
        }
        int count=0;
        vector<int>vis(v,0);
        for(int i=0;i<v;i++){
            if(!vis[i]){
                //cout<<i<<endl;
                count++;
                traverse(i,adjlist,vis,v);
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends