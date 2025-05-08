//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        deque<int>max_;
        vector<int>ans;
        
        int i=0,j=0;
        while(j<n){
            while(!max_.empty() && max_.back()< arr[j]) max_.pop_back();
            max_.push_back(arr[j]);
            
            if(j-i+1 == k){
                ans.push_back(max_.front());
                if(arr[i]==max_.front()) max_.pop_front();
                i++;
            }
            j++;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    
cout << "~" << "\n";
}

    return 0;
}
// } Driver Code Ends