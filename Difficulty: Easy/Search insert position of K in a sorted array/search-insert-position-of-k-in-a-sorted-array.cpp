//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int searchInsertK(vector<int> arr, int n, int k) {
        // code here
        int i=0,j=n-1;
        while(i<=j){
            int mid = i+(j-i)/2;
            
            if(arr[mid]>=k) j=mid-1;
            else i=mid+1;
        }
        return i;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends