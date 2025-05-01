//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        int  i=1,j=n/2+1;
        int ans = 0;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(mid *mid <=n){
                ans=max(mid,ans);
                i=mid+1;
            }
            else j=mid-1;
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
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends