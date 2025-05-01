//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // Your code goes here
        int n = a.size(), m = b.size();
        int i = 0, j = 0;
      
      	// m1 to store the middle element
      	// m2 to store the second middle element
        int m1 = -1, m2 = -1;
    
        // Loop till (m+n)/2
        for (int count = 0; count <= (m + n) / 2; count++) {
            m2 = m1;
          
         	// If both the arrays have remaining elements
            if (i != n && j != m)
                m1 = (a[i] > b[j]) ? b[j++] : a[i++];
            
          	// If only a[] has remaining elements
          	else if (i < n) 
                m1 = a[i++];
          
          	// If only b[] has remaining elements
            else 
                m1 = b[j++];
        }
    
        // Return median based on odd/even size
        if ((m + n) % 2 == 1) 
            return m1;
        else
            return (m1 + m2) / 2.0;
        }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline after reading `t`

    while (t--) {
        // Read the first array
        string line1;
        getline(cin, line1);
        stringstream ss1(line1);

        vector<int> array1;
        int num;
        while (ss1 >> num) {
            array1.push_back(num);
        }

        // Read the second array
        string line2;
        getline(cin, line2);
        stringstream ss2(line2);

        vector<int> array2;
        while (ss2 >> num) {
            array2.push_back(num);
        }

        // Create a Solution object and calculate the median
        Solution ob;
        if (array2.size() == 1 && array2[0] == 0) {
            array2.pop_back();
        }

        double ans = ob.medianOf2(array1, array2);
        if (ans == (int)ans) {
            cout << (int)ans << endl;
        } else {
            cout << ans << endl;
        }

        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends