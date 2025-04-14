//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int numOfSubset(vector<int> &arr) {
        // Your code goes here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        
        int count=1;
        for(int i=1;i<n;i++){
            if(arr[i]-1 != arr[i-1]) count++;
        }
        
        return count;
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
        cout << ob.numOfSubset(nums)
             << endl; // Corrected the function name and argument
    }
    return 0;
}

// } Driver Code Ends