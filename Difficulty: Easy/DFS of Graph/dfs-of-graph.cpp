//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void dfs_tra(vector<int> &dfs,vector<int>&vis,int node,vector<vector<int>>& adj){
        vis[node]=1;
        dfs.push_back(node);
        for(auto it = adj[node].begin();it!=adj[node].end();++it){
            if(!vis[*it]) dfs_tra(dfs,vis,*it,adj);
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        
        int n = adj.size();
        vector<int>dfs;
        vector<int>vis(n,0);
        dfs_tra(dfs,vis,0,adj);
        return dfs;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        int V;
        cin >> V;
        cin.ignore();
        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < V; i++) {
            string input;
            getline(cin, input);
            int num;
            vector<int> node;
            stringstream ss(input);
            while (ss >> num) {
                node.push_back(num);
            }
            adj[i] = node;
        }

        Solution obj;
        vector<int> ans = obj.dfs(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends