//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
  int atMostK(string s, int k) {
        unordered_map<char, int> m;
        int i = 0, res = 0;
        
        for (int j = 0; j < s.length(); j++) {
            m[s[j]]++;
    
            // Shrink the window if we have more than k distinct characters
            while (m.size() > k) {
                m[s[i]]--;
                if (m[s[i]] == 0) {
                    m.erase(s[i]);
                }
                i++;
            }
    
            // All substrings ending at j with at most k distinct characters
            res += j - i + 1;
        }
    
        return res;
    }
    int countSubstr(string& s, int k) {
        // code here.
        return atMostK(s, k) - atMostK(s, k - 1);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.countSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends