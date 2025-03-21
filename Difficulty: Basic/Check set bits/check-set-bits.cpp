//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

   
class Solution{
public:
    int isBitSet(int n){
        if(!n) return 0;
        // code here 
       while(n!=0){
           if((n&1) ==0) return 0;
           n>>=1;
       }
       return 1;
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
        cin>>N;
        Solution ob;
        cout << ob.isBitSet(N) << endl;
    
cout << "~" << "\n";
}
    return 0; 
}
// } Driver Code Ends