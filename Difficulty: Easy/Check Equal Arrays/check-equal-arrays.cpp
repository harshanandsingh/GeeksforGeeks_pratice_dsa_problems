//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    // Function to check if two arrays are equal or not.
    bool checkEqual(vector<int>& a, vector<int>& b) {
    
        if(a.size()!= b.size()) return false;
        
        unordered_map<int,int>m;
        
        for(int x:a){
            m[x]--;
        }
        for(int x:b){
            m[x]++;
        }
        for(auto x:m){
            if(x.second != 0) return false;
        }
        return true;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr1, arr2;
        string input1, input2;

        getline(cin, input1); // Read the entire line for the first array elements
        stringstream ss1(input1);
        int number;
        while (ss1 >> number) {
            arr1.push_back(number);
        }

        getline(cin, input2); // Read the entire line for the second array elements
        stringstream ss2(input2);
        while (ss2 >> number) {
            arr2.push_back(number);
        }

        Solution ob;
        cout << (ob.checkEqual(arr1, arr2) ? "true" : "false") << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends