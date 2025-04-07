//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string uncommonChars(string& s1, string& s2) {
        // code here
        int freq1[126] = {0};
        int freq2[126] = {0};
    
        for (char ch : s1) freq1[ch] = 1;
        for (char ch : s2) freq2[ch] = 1;
    
        string result = "";
    
        for (int i = 0; i < 126; i++) {
            if ((freq1[i] && !freq2[i]) || (!freq1[i] && freq2[i])) {
                result += (char)i;
            }
        }
    
        return result;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A;
        cin >> B;
        Solution ob;
        cout << ob.uncommonChars(A, B);
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends