//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    // Function to find the days of buying and selling stock for max profit.
    int stockBuySell(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        int pro = 0;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]) pro+=arr[i]-arr[i-1];
        }
        return pro;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.stockBuySell(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends