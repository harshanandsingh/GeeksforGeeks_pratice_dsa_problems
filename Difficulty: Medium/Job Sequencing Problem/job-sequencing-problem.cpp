//{ Driver Code Starts
// Driver code
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    int findParent(int x, vector<int>& parent) {
        if (x == parent[x]) return x;
        return parent[x] = findParent(parent[x], parent); // Path Compression
    }
    
    void unionParent(int u, int v, vector<int>& parent) {
        parent[u] = v; // Connect u's parent to v
    }
    
    static bool cmp(pair<int,int>a,pair<int,int>b){
        return a.second > b.second;
    }
    
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        // code here
        int n = deadline.size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({deadline[i],profit[i]});
        }
        
        sort(v.begin(),v.end(),cmp);
        
        
        int maxDeadline = 0;
        for (int i = 0; i < n; i++) {
            maxDeadline = max(maxDeadline, deadline[i]);
        }
        
        vector<int> parent(maxDeadline + 1);
        for (int i = 0; i <= maxDeadline; i++) {
            parent[i] = i;
        }
        
        int count = 0, maxProfit = 0;
        
        for (int i = 0; i < n; i++) {
            int profit_ = v[i].second;
            int deadline_ = v[i].first;
            
            int availableSlot = findParent(deadline_, parent);
            if (availableSlot > 0) {
                count++;
                maxProfit += profit_;
                unionParent(availableSlot, availableSlot - 1, parent);
            }
        }
        
        return {count, maxProfit};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> deadlines, profits;
        string temp;
        getline(cin, temp);
        int x;
        istringstream ss1(temp);
        while (ss1 >> x)
            deadlines.push_back(x);

        getline(cin, temp);
        istringstream ss2(temp);
        while (ss2 >> x)
            profits.push_back(x);

        Solution obj;
        vector<int> ans = obj.jobSequencing(deadlines, profits);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends