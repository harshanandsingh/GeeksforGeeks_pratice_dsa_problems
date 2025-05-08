//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findSubString(string& str) {
        // code here
        unordered_set<char>s;
        for(int x:str) s.insert(x);
        
        int k = s.size();
        
        unordered_map<char,int>m;
        int i=0,j=0,n=str.size();
        int min_ = INT_MAX;
        while(j<n){
            m[str[j]]++;
            
            while(m.size()==k){
                min_=min(min_,j-i+1);
                m[str[i]]--;
                if(m[str[i]]==0) m.erase(str[i]);
                i++;
            }
            
            j++;
        }
        return min_ == INT_MAX ? -1 : min_;
    }
};


//{ Driver Code Starts.
//      Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends