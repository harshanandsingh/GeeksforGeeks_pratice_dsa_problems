//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        int i=0,j=n-1;
        int max_ =0;
        while(i<j){
            int max_val ;
            if(arr[i]<=arr[j]){
                max_val = arr[i];
                i++;
            }
            else{
                max_val = arr[j];
                j--;
            }
            max_ = max(max_,max_val*(j-i+1));
        }
        return max_;
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