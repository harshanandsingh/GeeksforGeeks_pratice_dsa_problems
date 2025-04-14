//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        int m = arr.size();
        
        vector<int>p;
        vector<int>n;
        
        for(int i=0;i<m;i++){
            if(arr[i]>=0) p.push_back(arr[i]);
            else n.push_back(arr[i]);
        }
        
        int p_s=p.size() , n_s = n.size();
        int i=0,j=0,k=0;
        while(i<p_s && j<n_s){
            arr[k++]=p[i++];
            arr[k++]=n[j++];
        }
        while(i<p_s){
            arr[k++]=p[i++];
        }
        while(j<n_s){
            arr[k++]=n[j++];
        }
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends