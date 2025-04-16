//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        int i=0,j=0;
        int n = a.size(), m = b.size();
        
        while(i<n && j<m){
            if(i+j+1 == k) return min(a[i],b[j]);
            
            if(a[i]<= b[j]) i++;
            else if(a[i] > b[j]) j++;
        }
        
        while(i<n){
            
            if(i+j+1 == k) return a[i];
            i++;
        }
        
        while(j<m){
            
            if(i+j+1 == k) return b[j];
            j++;
        }
    }
};


//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends