//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    
cout << "~" << "\n";
}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string s)
{
    // your code here
    int flip1 = 0; // for pattern "0101..."
    int flip2 = 0; // for pattern "1010..."

    for (int i = 0; i < s.length(); i++) {
        // Pattern starting with '0'
        if (i % 2 == 0 && s[i] != '0') flip1++;
        if (i % 2 == 1 && s[i] != '1') flip1++;

        // Pattern starting with '1'
        if (i % 2 == 0 && s[i] != '1') flip2++;
        if (i % 2 == 1 && s[i] != '0') flip2++;
    }

    return min(flip1, flip2);
}