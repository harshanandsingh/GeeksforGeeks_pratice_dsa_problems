//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function template for C++

class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {        
        int ans=arr[0];
        for(int i=1;i<n;i++){
            ans^=arr[i];
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getOddOccurrence(arr, n);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}


// } Driver Code Ends