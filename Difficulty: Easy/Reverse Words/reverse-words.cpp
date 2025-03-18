//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string &s) {
        // code here
        // reverse(s.begin() , s.end());
        // int j=0,i=0,n=s.length();
        // if(s[i]==' ') i++;
        // if(s[n-1]==' ') n--;
        // while(j < n){
        //     while(j<n && s[j]!=' ') j++;
        //     reverse(s.begin()+i,s.begin()+j);
        //     j++;
        //     i=j;
        // }
        // return s;
        
        // string ans="";
        // int i,j,k;
        // i=j=k=s.size()-1;
        // while(j>=0){
        //     if(s[j] != ' ') j--;
        //     else{
        //         if(j+1 < s.size()) i=j+1;
        //         while(i<=k) ans+=s[i++];
        //         k=j;
        //         i=j;
        //         j--;
        //     }
        // }
        // return ans;
        
        
        string ans = "";
        int i = s.size() - 1;
    
        while (i >= 0) {
            // Skip trailing spaces
            while (i >= 0 && s[i] == ' ') i--;
    
            if (i < 0) break;  // If we reach the start, break
    
            int j = i; // Mark the end of the word
    
            // Move `i` to the start of the word
            while (i >= 0 && s[i] != ' ') i--;
    
            // Append the word to `ans`
            if (!ans.empty()) ans += " "; // Add space between words
            ans += s.substr(i + 1, j - i);
        }
    
        return ans;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;     // Read the number of test cases
    cin.ignore(); // Consume the newline character after reading the integer

    while (t--) {
        string s;
        getline(cin, s); // Read the string input

        string str = s.substr(1, s.size() - 2); // Remove surrounding quotes
        Solution obj;                       // Create an object of the Solution class
        string ans = obj.reverseWords(str); // Reverse the words in the string
        cout << '"';                        // Print opening quote
        cout << ans;                        // Print the result
        cout << '"';                        // Print closing quote
        cout << endl;                       // Print a newline
    }
    return 0; // Return 0 to indicate successful execution
}

// } Driver Code Ends