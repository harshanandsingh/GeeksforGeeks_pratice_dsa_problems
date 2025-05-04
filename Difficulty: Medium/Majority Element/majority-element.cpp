//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        
        // no candidate , and count = 0
        int candidate = -1,count = 0;
        for(int x: arr){
            if(count==0){
                candidate = x;
                count++;
            }
            else if(candidate == x) count++;
            else if(candidate != x) count--;
        }
        int fre_can = 0;
        for(int x : arr) if(x == candidate ) fre_can++;
        
        if(fre_can > arr.size()/2) return candidate;
        else return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.majorityElement(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends