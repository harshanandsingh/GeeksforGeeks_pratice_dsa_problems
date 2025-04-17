//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // arr[]: input array
    // Function to find the maximum index difference.
    int maxIndexDiff(vector<int>& arr) {
        // Your code here
        // int n = arr.size();
        // int max_len = 0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(arr[j]>=arr[i]) max_len = max(max_len , j-i);
        //     }
        // }
        // return max_len;
        
        int n = arr.size();
        vector<int> LMin(n), RMax(n);
    
        // Fill LMin[]
        LMin[0] = arr[0];
        for (int i = 1; i < n; i++)
            LMin[i] = min(arr[i], LMin[i - 1]);
    
        // Fill RMax[]
        RMax[n - 1] = arr[n - 1];
        for (int j = n - 2; j >= 0; j--)
            RMax[j] = max(arr[j], RMax[j + 1]);
    
        // Traverse both arrays to find maximum j - i
        int i = 0, j = 0, maxDiff = -1;
        while (i < n && j < n) {
            if (LMin[i] <= RMax[j]) {
                maxDiff = max(maxDiff, j - i);
                j++;
            } else {
                i++;
            }
        }
    
        return maxDiff;
        }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;

        // calling maxIndexDiff() function
        cout << ob.maxIndexDiff(nums) << endl;
    }

    return 0;
}
// } Driver Code Ends