//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string s) {
        // Code here
        unordered_map<char,int>m;
        int i=0,j=0,n=s.size();
        int min_ = INT_MAX;
        while(j<n){
            m[s[j]]++;
            while(m['0']>0 && m['1']>0 && m['2']>0){
                min_ = min(min_,j-i+1);
                m[s[i]]--;
                i++;
            }
            j++;
        }
        return min_ == INT_MAX ? -1:min_;
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