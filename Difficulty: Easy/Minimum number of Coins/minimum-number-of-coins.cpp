//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    vector<int> minPartition(int N) {
        // code here
        vector<int>v{1,2,5,10,20,50,100,200,500,2000};
        
        vector<int>ans;
        
        int n = v.size();
        for(int i=n-1;i>=0;i--){
            while(N>=v[i]){
                ans.push_back(v[i]);
                N-=v[i];
            }
            if(N==0) break;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends