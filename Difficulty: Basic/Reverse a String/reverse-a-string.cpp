//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int n = s.size();
        int i=0,j=n-1;
        while(i<j){
            s[i]^=s[j];
            s[j]^=s[i];
            s[i]^=s[j];
            i++;
            j--;
        }
        return s;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseString(s) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends