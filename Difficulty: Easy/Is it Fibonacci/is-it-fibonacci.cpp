//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    long long solve(int N, int k, vector<long long> arr) {
        // code here
        vector<long long>ans(arr.begin(),arr.end());
        
        
        long long i=0,j=0,n=arr.size(),pre_sum=0;
        while(j<N){
            pre_sum+=ans[j];
            
            if(j-i+1 == k){
                
                ans.push_back(pre_sum);
                pre_sum-= ans[i++];
            }
            
            j++;
        }
        return ans[N-1];
    }
};



//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends