//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:

    int maxProduct(vector<int>& arr) {
        // code here
        int first_max = INT_MIN, sec_max = INT_MIN;
        
        int n =arr.size();
        for(int i=0;i<n;i++){
            
            if(arr[i]>first_max){
                sec_max = first_max;
                first_max = arr[i];
            }
            else if(arr[i]==first_max || arr[i]>sec_max) sec_max = arr[i];
        }
        return (first_max * sec_max);
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
        int res = obj.maxProduct(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends