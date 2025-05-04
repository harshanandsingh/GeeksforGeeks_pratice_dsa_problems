//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int,int>m;
        m[0]=-1;
        int pre_sum = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            pre_sum += arr[i];
            if(m.find(pre_sum - k) != m.end()){
                ans = max(ans,i-m[pre_sum-k]);
            }
            if (m.find(pre_sum) == m.end()) {
                m[pre_sum] = i;  // store first occurrence only
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends