//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        // int n = arr.size();
        
        // int i=0,j=0;
        
        // vector<int>v;
        
        // vector<int>max_val;

        // while(j<n){
            
        //     int t = max_val.size()-1;
            
        //     while(!max_val.empty() && max_val[t]<arr[j]){
        //         max_val.pop_back();
        //         t--;
        //     }
        //     max_val.push_back(arr[j]);
            
        //     if(j-i+1 < k ) j++;
        //     else{
        //         v.push_back(max_val[0]);
        //         if(arr[i]==max_val[0] ) max_val.pop_front();
        //         i++;
        //     }
        // }
        // return v;
        
        int n = arr.size();
        int i = 0, j = 0;
    
        vector<int> v;           // stores final result
        vector<int> max_val;     // stores potential max elements in decreasing order
    
        while (j < n) {
            // Maintain decreasing order in max_val
            while (!max_val.empty() && max_val.back() < arr[j]) {
                max_val.pop_back();
            }
            max_val.push_back(arr[j]);
    
            // If window size < k, just move j
            if (j - i + 1 < k) {
                j++;
            }
            else if (j - i + 1 == k) {
                // Front of max_val is the max in the window
                v.push_back(max_val[0]);
    
                // If the element going out is the current max, remove it
                if (arr[i] == max_val[0]) {
                    max_val.erase(max_val.begin());
                }
    
                i++;
                j++;
            }
        }
    
        return v;
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

        Solution obj;
        vector<int> res = obj.maxOfSubarrays(arr, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends