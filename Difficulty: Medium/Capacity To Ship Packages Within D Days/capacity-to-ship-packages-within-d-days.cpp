//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    bool canShip(int arr[], int n, int d, int capacity) {
        int days = 1, currentLoad = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > capacity) return false; // Can't ship this package at all
            if (currentLoad + arr[i] > capacity) {
                days++;  // Need one more day
                currentLoad = 0;
            }
            currentLoad += arr[i];
        }
        return days <= d;
    }
    int leastWeightCapacity(int arr[], int n, int d) {
        // code here
        int low = *max_element(arr, arr + n); // At least the max package weight
        int high = accumulate(arr, arr + n, 0); // At most the sum of all packages
        int ans = high;
        
        while(low<=high){
            int mid = low + (high - low )/2;
            bool res = canShip(arr,n,d,mid);
            if(res){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans ;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, D;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        cin >> D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr, N, D) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends