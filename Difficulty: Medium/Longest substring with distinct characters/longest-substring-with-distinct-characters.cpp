//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        unordered_map<char,int>m;
        int n = s.size();
        
        int j=0,i=0;
        int max_ = 0;
        while(j<n){
            if(m.find( s[j] ) != m.end()){
                //max_ = max(max_,j-i);
                i=max(m[s[j]]+1,i);
                //m[s[j]]=j;
            }
            // else{
            //     m[s[j]]=j;
            // }
            m[s[j]] = j;
            max_ = max(max_, j - i + 1);
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

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends