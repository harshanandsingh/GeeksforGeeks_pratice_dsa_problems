//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        int k = 0 ;
        
        int n = arr.size();
        
        vector<int>v;
        
        for(int i=0;i<n;i++){
            if(arr[i] >=0 ) arr[k++] = arr[i];
            else v.push_back(arr[i]);
        }
        
        for(int x : v){
            arr[k++] = x;
        }
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << "\n~\n";
    }
}
// } Driver Code Ends