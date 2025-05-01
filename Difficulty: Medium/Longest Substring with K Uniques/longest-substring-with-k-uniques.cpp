//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // your code here
        int n = s.size();
        // unordered_set<int>set;
        
        // int i=0,j=0,max_=0;
        // while(j<n){
        //     if(set.find(s[j])!= set.end()){
        //         while(s[i]!=s[j]) i++;
        //         i++;
        //     }
        //     else{
        //         set.insert(s[j]);
        //     }
            
        //     if(set.size()>=k){
        //         cout<<i<<" "<<j<<endl;
        //         max_ = max(max_,j-i+1);
        //     }
        //     j++;
        // }
        // return max_;
        unordered_map<char,int>m;
        int i=0,j=0,max_ = -1;
        while(j<n){
            m[s[j]]++;
            while(m.size()>k){
                m[s[i]]--;
                if(m[s[i]]==0) m.erase(s[i]);
                i++;
            }
            if(m.size() == k) max_= max(max_,j-i+1);
            j++;
        }
        return max_;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends