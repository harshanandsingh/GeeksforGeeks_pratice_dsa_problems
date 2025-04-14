//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void rearrange(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n;i+=2){
            int temp = arr[n-1];
            for(int j=n;j>i;j--){
                arr[j]=arr[j-1];
            }
            arr[i]=temp;
        }
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
        obj.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends