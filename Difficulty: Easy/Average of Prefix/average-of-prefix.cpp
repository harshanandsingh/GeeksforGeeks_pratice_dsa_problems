//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    vector<int> prefixAvg(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int>ans(n);
        ans[0]=arr[0];
        
        for(int i=1;i<n;i++){
            arr[i]=arr[i]+arr[i-1];
            ans[i]= arr[i]/(i+1);
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
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.prefixAvg(arr);

        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends