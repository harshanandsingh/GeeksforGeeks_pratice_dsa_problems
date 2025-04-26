//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int maxBalls(int n, int m, vector<int> a, vector<int> b) {
        //code here
        int i = 0, j = 0;
        int sum1 = 0, sum2 = 0, ans = 0;
        
        while (i < n && j < m) {
            //int val = -1;
            while(i<n && a[i]==a[i+1]) sum1+=a[i++];
            while(j<m && b[j]==b[j+1]) sum2+=b[j++];
            
            if (a[i] < b[j]) sum1 += a[i++];
            else if (a[i] > b[j]) sum2 += b[j++];
            else {  // a[i] == b[j]
                //val = a[i];
                ans += max(sum1, sum2) + a[i];
                sum1 = sum2 = 0;
                i++;
                j++;
            }
            
            // int val = a[i];
            // while (i < n && a[i] == val) i++;
            // while (j < m && b[j] == val) j++;
            // int count1=0,count2=0;
            // while (i < n && a[i] == val){
            //     i++;
            //     count1++;
            // } 
            // while (j < m && b[j] == val){
            //     j++;
            //     count2++;
            // }
            // if(val != -1) ans+=val*max(count1,count2);
        }
        
        // Add remaining balls
        while (i < n) sum1 += a[i++];
        while (j < m) sum2 += b[j++];
        
        ans += max(sum1, sum2);
        
        return ans;
        
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<int> a(N), b(M);
        for (int i = 0; i < N; i++)
            cin >> a[i];
        for (int i = 0; i < M; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.maxBalls(N, M, a, b) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends