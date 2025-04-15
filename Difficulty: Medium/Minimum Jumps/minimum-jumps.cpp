//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        int r=0,l=0;
        int jump =0;
        
        if (n <= 1) return 0;
        if (arr[0] == 0) return -1;
        
        while(r < n-1){
            
            int l_jump = 0;
            
            for(int i=l;i<=r;i++){
                l_jump = max(l_jump,arr[i]+i);
            }
            if (l_jump <= r) return -1; // stuck, can't go further
            l=r+1;
            r=l_jump;
            jump++;
        }
        return jump;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends