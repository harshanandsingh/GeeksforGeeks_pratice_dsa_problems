//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        int i=0,j=n-1;
        int start =-1,end=-1;
        while(i<=j){
            int mid = i + (j-i)/2;
            
            if(arr[mid]==x){
                start = mid;
                j=mid-1;
            }
            else if(arr[mid]>x) j=mid-1;
            else i=mid+1;
        }
        
        if(start == -1) return {start,end};
        
        i=0,j=n-1;
        while(i<=j){
            int mid = i + (j-i)/2;
            
            if(arr[mid]==x){
                end = mid;
                i=mid+1;
            }
            else if(arr[mid]>x) j=mid-1;
            else i=mid+1;
        }
        
        return {start,end};
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x;
        cin >> x;
        cin.ignore();
        vector<int> ans;
        Solution ob;
        ans = ob.find(arr, x);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends