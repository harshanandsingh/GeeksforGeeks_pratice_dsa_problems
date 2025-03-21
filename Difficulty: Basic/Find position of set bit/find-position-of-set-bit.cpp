//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findPosition(int n) {
        // code here
        // int i=0;
        // int count=0;
        // while(n){
        //     if(n&(1<<i)) count++;
        //     i++;
        // }
        // if(count) return i+1;
        // return -1;
        
        if(n==0 || (n&(n-1)) !=0 ) return -1;
        
        int i=1;
        while((n&1) == 0){
            n>>=1;
            i++;
        }
        return i;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin >> N;

        Solution ob;
        cout << ob.findPosition(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends