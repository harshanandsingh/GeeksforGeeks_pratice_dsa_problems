//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Code here
        int n = arr.size();
        unordered_map<int,int>m;
        
        int max_ = 0;
        
        for(int i=0;i<n;i++){
           if(m.find(arr[i])!= m.end()) max_ = max(max_ ,i - m[arr[i]]);
           else m[arr[i]] = i;
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
        getline(cin, input);

        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.maxDistance(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends