//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
        // code here
        if(s==0){
            if(d==1) return "0";
            return "-1";
        }
        if(s > 9*d) return "-1";
        string res(d,'0');
        
        for(int i=d-1;i>=0;i--){
            if(s>9){
                res[i]='9';
                s-=9;
            }
            else{
                res[i]='0'+s;
                s=0;
            }
        }
        
        if(res[0]=='0'){
            res[0]='1';
            for(int i=1;i<d;i++){
                if(res[i]>'0'){
                    res[i]--;
                    break;
                }
            }
        }
        
        return res;
    }
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends