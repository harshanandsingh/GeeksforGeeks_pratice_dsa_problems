//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void bitManipulation(int num, int i) {
        // your code here
        i=i-1;
        
        if((num & (1<<i)) !=0) cout<<1<<" ";
        else cout<<0<<" ";
        cout<< (num | (1 << i))<<" ";
        int mask = ~(1 << i);
        cout<< (num & mask);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends