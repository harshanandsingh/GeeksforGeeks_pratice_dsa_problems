//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        int i=0,j=0,n=a.size(),m=b.size(),k=0;
        vector<int>v(n+m);
        while(i<n && j<m ){
            if(a[i]<b[j]) v[k++]=a[i++];
            else v[k++] = b[j++];
        }
        while(i<n) v[k++] = a[i++];
        while(j<m) v[k++] = b[j++];

        k=0;
        for(int i=0;i<m+n;i++){
            if(v[i] > v[k]) v[++k]=v[i];
        }
        
        return vector<int>(v.begin(),v.begin()+k+1);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends