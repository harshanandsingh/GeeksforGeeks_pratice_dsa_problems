//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string s) {
        // Code here
        int n = s.size();
        
        int i=0,j=0,ans=INT_MAX;
        
        unordered_map<char, int> freq;
        
        while(j<n){
            freq[s[j]]++;
            
            while (freq['0'] > 0 && freq['1'] > 0 && freq['2'] > 0){
                ans = min(ans,j-i+1);
                
                freq[s[i]]--;
                i++;
            }
            
            j++;
        }
        return (ans == INT_MAX) ? -1 : ans;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends