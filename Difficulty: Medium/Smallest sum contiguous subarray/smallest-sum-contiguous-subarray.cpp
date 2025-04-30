//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int smallestSumSubarray(vector<int>& a) {
        // Code here
        int n = a.size();
        
        for(int i=0;i<n;i++){
            a[i]=-a[i];
        }
        
        //kadans algorithm -> find maximum sum 
        
        int j=0;
        int sum=0,max_ = INT_MIN;
        while(j<n){
            sum+=a[j];
            
            max_ = max(max_,sum);
            if(sum<0){
                sum = 0;
            }
            j++;
        }
        return -max_;
    }
};



//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        Solution ob;
        
        int ans = ob.smallestSumSubarray(a);
        
        cout<<ans<<endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends