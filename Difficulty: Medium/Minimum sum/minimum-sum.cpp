//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    
    // Helper to remove leading zeros
    string removeLeadingZeros(string s) {
        int i = 0;
        while (i < s.size() && s[i] == '0') i++;
        return (i == s.size()) ? "0" : s.substr(i);
    }
    
    // Function to add two big integers as strings
    string addStrings(string num1, string num2) {
        string result = "";
        int carry = 0;
        
        int i = num1.length() - 1, j = num2.length() - 1;
        
        while(i >= 0 || j >= 0 || carry) {
            int sum = carry;
            
            if(i >= 0) sum += num1[i--] - '0';
            if(j >= 0) sum += num2[j--] - '0';
            
            result += (sum % 10 + '0');
            carry = sum / 10;
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
    
    string minSum(vector<int> &arr) {
        sort(arr.begin(), arr.end());
        string a = "", b = "";
        
        for (int i = 0; i < arr.size(); ++i) {
            if (i % 2 == 0) a += to_string(arr[i]);
            else b += to_string(arr[i]);
        }
        
        // Remove leading zeros before addition
        a = removeLeadingZeros(a);
        b = removeLeadingZeros(b);
        
        return addStrings(a, b);
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        string ans = ob.minSum(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends