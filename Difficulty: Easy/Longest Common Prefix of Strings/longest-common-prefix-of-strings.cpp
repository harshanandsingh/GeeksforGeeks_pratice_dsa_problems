//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        int n = arr.size();
        string ans = arr[0];
        
        for(int i=1;i<n;i++){
            for(int j=0;j<ans.size();j++){
                if(ans[j]!=arr[i][j]) ans = ans.substr(0,j);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        string ans = ob.longestCommonPrefix(arr);
        if (ans.empty())
            cout << "\"\"";
        else
            cout << ans;
        cout << endl;
    }
}

// } Driver Code Ends