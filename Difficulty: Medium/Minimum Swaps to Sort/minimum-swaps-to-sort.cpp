//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    // Function to find the minimum number of swaps required to sort the array.
    int minSwaps(vector<int>& arr) {
        // Code here
        int n = arr.size();

        // Step 1: Pair elements with their original indices
        vector<pair<int, int>> valueIndexPair(n);
        for (int i = 0; i < n; i++) {
            valueIndexPair[i] = {arr[i], i};
        }
    
        // Step 2: Sort based on the element values
        sort(valueIndexPair.begin(), valueIndexPair.end());
    
        // Step 3: Create a visited array
        vector<bool> visited(n, false);
        int swaps = 0;
    
        // Step 4: Traverse the array and find cycles
        for (int i = 0; i < n; i++) {
            // If already visited or already in the correct position
            if (visited[i] || valueIndexPair[i].second == i)
                continue;
    
            int cycle_size = 0;
            int j = i;
    
            // Follow the cycle
            while (!visited[j]) {
                visited[j] = true;
                j = valueIndexPair[j].second;  // Move to the index where this element should go
                cycle_size++;
            }
    
            // If there is a cycle of size > 1, then it will take (cycle_size - 1) swaps
            if (cycle_size > 1)
                swaps += (cycle_size - 1);
        }
    
        return swaps;
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minSwaps(arr) << endl;
    }
}

// } Driver Code Ends