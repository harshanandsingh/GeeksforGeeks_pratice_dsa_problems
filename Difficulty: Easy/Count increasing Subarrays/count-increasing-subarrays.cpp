//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countIncreasing(vector<int>& arr) {
        // code here.
        int n = arr.size();
        
        int count=0;
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[j]>arr[j-1]) count++;
                else break;
            }
        }
        return count;
    }
};



//{ Driver Code Starts.

// Driver Program
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        cout << ob.countIncreasing(arr) << endl;
        cout << "~\n";
    }
}

// } Driver Code Ends