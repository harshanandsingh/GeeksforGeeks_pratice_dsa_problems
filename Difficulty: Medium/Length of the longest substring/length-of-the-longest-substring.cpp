//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int longestUniqueSubstring(string &s) {
        // code
        unordered_map<char,int>m;
        int n = s.size();
        
        int i=0,j=0;
        int max_ = 0;
        while(j<n){
            
            while(m.find(s[j]) !=m.end()){
                m[s[i]]--;
                if(m[s[i]]==0) m.erase(s[i]);
                i++;
            }
            m[s[j]]++;
            
            max_ = max(max_,j-i+1);
            j++;
        }
        return max_;
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
        cout << ob.longestUniqueSubstring(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends