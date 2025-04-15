//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        if(n==1) return 0;
        
        int i=0,j=n-1;
        
        int max_h = INT_MIN;
        
        while(i<j){
            max_h = max(max_h , (j-i)*min(arr[i],arr[j]));
            //cout<<max_h<<" "<<i<<" "<<j<<endl;
            if(arr[i]<=arr[j]) i++;
            else j--;
        }
        return max_h;
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends