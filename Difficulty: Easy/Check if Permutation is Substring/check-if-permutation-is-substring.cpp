//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    bool search(string& txt, string& pat) {
        
        //count of each element of the pattern 
        unordered_map<char,int>p;
        for(char x:pat) p[x]++;
        
        unordered_map<char,int>t;
        int i=0,j=0,n=txt.size(),k=pat.size();
        
        while(j<n){
            t[txt[j]]++;
            
            if(j-i+1>k){
                t[txt[i]]--;
                if(t[txt[i]]==0) t.erase(txt[i]);
                i++;
            }
            
            if(j-i+1 == k && t==p) return true;
            j++;
        }
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string txt, pat;
        cin >> txt >> pat;
        Solution ob;
        bool res = ob.search(txt, pat);
        if (res)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}

// } Driver Code Ends