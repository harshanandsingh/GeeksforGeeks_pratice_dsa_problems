//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        int left =0 , right = n-1;
        int l_m = 0, r_m=0;
        int water = 0;
        
        while(left < right){
            if(arr[left]<=arr[right]){
                if(arr[left] > l_m){
                    l_m = arr[left];
                }
                else{
                    water+= l_m - arr[left];
                }
                left++;
            }
            else{
                if(arr[right] > r_m){
                    r_m = arr[right];
                }
                else{
                    water+= r_m - arr[right];
                }
                right--;
            }
        }
        return water;
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends