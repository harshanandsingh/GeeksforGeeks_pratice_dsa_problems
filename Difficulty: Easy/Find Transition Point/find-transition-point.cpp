//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        int n = arr.size();
        
        if(arr[0]==1) return 0;
        if(arr[n-1]==0) return -1;
        
        for(int i=0;i<n;i++){
            if(arr[i]==1) return i;
        }
        return -1;
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
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.transitionPoint(arr) << endl;

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends