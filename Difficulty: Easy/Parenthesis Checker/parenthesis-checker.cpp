//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> st;
        unordered_map<char, char> m = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
    
        for (char x : s) {
            if (x == '(' || x == '{' || x == '[') {
                st.push(x);
            } else {
                // Check if stack is empty before accessing top
                if (st.empty() || st.top() != m[x]) {
                    return false;
                }
                st.pop();
            }
        }
    
        // If the stack is not empty, then it's unbalanced
        return st.empty();
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends