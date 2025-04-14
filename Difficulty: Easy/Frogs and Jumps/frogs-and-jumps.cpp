//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int n, int leaves, int frogs[]) {
        // Code here
        // vector<int>v(leaves+1);
        
        
        
        
        // for(int i=0;i<n;i++){
        //     if(frogs[i]==1) return 0;
        //     for(int j=frogs[i];j<=leaves;j+=frogs[i]){
        //         v[j]=1;
        //     }
        // }
        
        // int count=0;
        // for(int i=1;i<v.size();i++){
        //     if(!v[i]) count++;
        // }
        
        // return count;
        
        
        vector<int> v(leaves + 1, 0);
        sort(frogs, frogs + n); // process smaller jumps first
        unordered_set<int> used;
    
        for (int i = 0; i < n; i++) {
            int jump = frogs[i];
            if (jump == 1) return 0;
    
            // skip if this jump is a multiple of already-used smaller jump
            bool skip = false;
            for (int prev : used) {
                if (jump % prev == 0) {
                    skip = true;
                    break;
                }
            }
    
            if (skip) continue;
            used.insert(jump);
    
            for (int j = jump; j <= leaves; j += jump) {
                v[j] = 1;
            }
        }
    
        int count = 0;
        for (int i = 1; i <= leaves; i++) {
            if (v[i] == 0) count++;
        }
    
        return count;
        
    }
};



//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends