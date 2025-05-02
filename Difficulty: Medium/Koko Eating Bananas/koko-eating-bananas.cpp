//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int gethour(vector<int>arr,int mid){
        int hour = 0;
        for(auto x:arr){
            hour+= ceil(double(x)/mid);
        }
        return hour;
    }
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int n = arr.size();
        int max_ = INT_MIN;
        
        // for(int i=0;i<n;i++){
        //     max_ = max(max_,arr[i]);
        // }
        
        
        int low = 1,high = *max_element(arr.begin(),arr.end());
        int ans = high;
        while(low <= high){
            int mid = low + (high - low)/2;
            int hour = gethour(arr,mid);
            if( hour <= k){
                ans= mid;
                high = mid-1;
            }
            else  low = mid+1;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;

        cout << ob.kokoEat(arr, k);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends