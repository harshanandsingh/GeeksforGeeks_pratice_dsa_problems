//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int equalSum(vector<int> &arr) {
        // code here
        int sum = 0;
        for(int x : arr) sum+=x;
        
        int s=0;
        for(int i=0;i<arr.size();i++){
            
            if(s == sum - s - arr[i]) return i;
            s+=arr[i];
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
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        int ans = ob.equalSum(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends