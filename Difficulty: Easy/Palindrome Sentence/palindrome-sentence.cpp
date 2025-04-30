//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User template code in C++

class Solution {
  public:
    bool sentencePalindrome(string &s) {
        // code here
        
        
        string cleaned;

        // Remove non-alphanumeric characters and convert to lowercase
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }
        //cout<<cleaned<<endl;
        
        int i=0,j=cleaned.size()-1;
        while(i<j){
            if(cleaned[i]!=cleaned[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        if (ob.sentencePalindrome(s))
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}

// } Driver Code Ends