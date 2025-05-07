//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long long findMaxSubarraySum(vector<int>& arr, long long x) {
        // Your code goes here
        int i=0,j=0,n=arr.size();
        int sum=0;
        int max_ = 0;
        while(j<n){
            sum+=arr[j];
            
            while(sum>x){
                sum-=arr[i++];
            }
            
            max_ = max(max_,sum);
            j++;
        }
        return max_;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        long long sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        cout << ob.findMaxSubarraySum(arr, sum);

        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends