//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    bool yes(vector<int>arr,int k,int mid){
        int sum=0;
        for(auto x:arr){
            sum+=ceil((double)x/mid);
        }
        return sum<=k;
    }
    int smallestDivisor(vector<int>& arr, int k) {

        int low = 1 , high = *max_element(arr.begin(),arr.end());
        int ans = high;
        
        while(low<=high){
            int mid = low + (high - low)/2;
            bool res = yes(arr,k,mid);
            if(res){
                ans = mid;
                high = mid-1;
            }
            else low = mid +1;
        }
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.smallestDivisor(arr, d);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends