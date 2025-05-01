//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        int n=arr.size();
        
        sort(arr.begin(),arr.end());
        
        if(n&1) return arr[n/2];
        
        return (double)(arr[(n-1)/2]+arr[n/2]) / 2;
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
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        cout << ob.findMedian(arr) << endl;
        cout << "~\n";
    }
}

// } Driver Code Ends