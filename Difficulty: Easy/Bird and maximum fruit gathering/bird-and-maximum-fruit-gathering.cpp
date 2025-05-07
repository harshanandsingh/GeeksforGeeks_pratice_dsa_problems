//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxFruits(vector<int>& arr, int k) {
        // code here
        k = ceil(k);
        int n = arr.size();
        int i=0,j=0;
        int sum=0,max_=0;
        while(j<n){
            sum+=arr[j];
            if(j-i+1 > k) sum-=arr[i++];
            
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
    while (t--) {
        int totalTime;
        cin >> totalTime;
        string input;
        getline(cin >> ws, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution solution;
        cout << solution.maxFruits(arr, totalTime) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends