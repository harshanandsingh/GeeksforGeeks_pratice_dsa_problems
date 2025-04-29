//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxChildren(vector<int> &greed, vector<int> &cookies) {
        // Your Code goes here.
        sort(greed.begin(), greed.end());
        sort(cookies.begin(), cookies.end());
    
        int i = 0, j = 0; // i for greed, j for cookies
        int count = 0;
    
        while (i < greed.size() && j < cookies.size()) {
            if (cookies[j] >= greed[i]) {
                count++;
                i++; // move to next child only when current is satisfied
            }
            j++; // always move to next cookie
        }
    
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> greed;
        int num;
        while (ss >> num)
            greed.push_back(num);
        getline(cin, input);
        ss.clear();
        vector<int> cookie;
        ss.str(input);
        while (ss >> num)
            cookie.push_back(num);

        Solution obj;
        cout << obj.maxChildren(greed, cookie) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends