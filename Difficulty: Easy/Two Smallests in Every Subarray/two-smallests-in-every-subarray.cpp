//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        if(n<=1) return -1;
        
        int sum = 0;
        int i=0,j=0,k=2;
        int max_ = 0;
        while(j<n){
            sum+=arr[j];
            if(j-i+1 > 2){
                sum-=arr[i++];
            }
            max_ = max(sum,max_);
            j++;
        }
        return max_;
        
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();

    while (tc--) {
        string input;
        getline(cin, input);

        stringstream ss(input);
        vector<int> a;
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution obj;
        int res = obj.maxSum(a);
        cout << res << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends