//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User Function Template
class Solution {
  public:
    vector<int> closestPairSum(vector<int> &arr, int t) {
        // Code here
        if(arr.size()<=1) return {};
        sort(arr.begin(),arr.end());
        int n=arr.size(),i=0,j=n-1;
        int ans = INT_MAX,f,l;
        while(i<j){
            
            if(abs(t-arr[i]-arr[j]) < ans){
                ans = abs(t-arr[i]-arr[j]);
                f=arr[i];
                l=arr[j];
            }
            
            if(arr[i]+arr[j]<t) i++;
            else if(arr[i]+arr[j]>t) j--;
            else return { arr[i] , arr[j] };
        }
        return {f,l};
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
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        vector<int> res = ob.closestPairSum(arr, target);
        if (res.size() == 0) {
            cout << "[]\n";
        } else {
            for (int i = 0; i < res.size(); i++) {
                cout << res[i] << " ";
            }
            cout << "\n";
        }
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends