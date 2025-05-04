//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n = arr.size();
        long long int pro = 1;
        int c_0 = 0;
        for(int i=0;i<n;i++){
            if(arr[i] != 0) pro*=arr[i];
            else c_0++;
        }
        vector<int>res(n,0);
        if(c_0 >=2) return res;
        else if(c_0 == 1){
            for(int i=0;i<n;i++){
                if(arr[i]==0){
                    res[i]=pro; 
                    return res;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            res[i]=pro/arr[i];
        }
        return res;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

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
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends