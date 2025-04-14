//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        int n = s.size();
        string ans = "";
        unordered_set<char>set;
        for(int i=0;i<n;i++){
            if(set.find(s[i])==set.end()){
                set.insert(s[i]);
                ans+=s[i];
            }
        }
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends