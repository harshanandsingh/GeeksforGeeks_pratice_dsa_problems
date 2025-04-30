//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    long long countSubArrayProductLessThanK(const vector<int>& arr, int n,long long k) {
        if (k <= 1) return 0;

        long long left = 0, prod = 1, count = 0;
        
        for (long long right = 0; right < arr.size(); right++) {
            prod *= arr[right];
            
            while (prod >= k) {
                prod /= arr[left];
                left++;
            }
            
            count += (right - left + 1);  // count subarrays ending at right
        }
        
        return count;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends