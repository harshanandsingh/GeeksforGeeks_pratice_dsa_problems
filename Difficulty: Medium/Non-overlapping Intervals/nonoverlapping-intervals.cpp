//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    static bool cmp(const vector<int> &a, const vector<int> &b){
        return a[1] < b[1]; // sort based on end time
    }
    int minRemoval(vector<vector<int>> &arr) {
        // code here
        int n = arr.size();
        
        sort(arr.begin(),arr.end(),cmp);
        
        int count = 1;
        int last = arr[0][1];
        for(int i=1;i<n;i++){
            
            if(arr[i][0] >= last ){
                count++;
                last = arr[i][1];
            }
        }
        return n - count;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<vector<int>> intervals(N, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> intervals[i][0] >> intervals[i][1];
        }
        Solution obj;
        cout << obj.minRemoval(intervals) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends