//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        unordered_map<int,int>m;
        m[0]=1;
        int count=0;
        int pre_sum = 0;
        for(int i=0;i<n;i++){
            pre_sum +=arr[i];
            if(m.find(pre_sum - k) != m.end() ){
                count+=m[pre_sum-k];
            }
            m[pre_sum]++;
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.countSubarrays(arr, k);
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends