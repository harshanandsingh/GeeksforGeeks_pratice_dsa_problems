//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    // arr[] : int input array of integers
    // target : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int target) {
        
        // Your code goes here
        
        // int n = arr.size();
        
        // sort(arr.begin(), arr.end());
        
        // // sort(arr.begin(),arr.end());
        // // int k=0;
        // // for(int i=0;i<n;i++){
        // //     if(arr[i]>arr[k]) arr[++k]=arr[i];
        // // }
        
        // // n=k+1;
        
        // vector<vector<int>>v;
        
        // for(int i=0;i<n;i++){
        //     if (i > 0 && arr[i] == arr[i - 1]) continue;
        //     int new_t = target-arr[i];
        //     for(int j=i+1;j<n;j++){
        //         int new_t1 = new_t - arr[j];
        //         unordered_map<int,int>m2;
        //         for(int k=j+1;k<n;k++){
        //             if(m2.find(new_t1-arr[k])!=m2.end()){
        //                 v.push_back({i,j,m2[new_t1-arr[k]],k});
                        
        //             }
        //             else{
        //                 m2[arr[k]]=k;
        //             }
        //         }
        //     }
        // }
        // return v;
        
        
        int n = arr.size();
        vector<vector<int>> res;
    
        sort(arr.begin(), arr.end());
    
        for (int i = 0; i < n - 3; ++i) {
            // skip duplicates for i
            if (i > 0 && arr[i] == arr[i - 1]) continue;
    
            for (int j = i + 1; j < n - 2; ++j) {
                // skip duplicates for j
                if (j > i + 1 && arr[j] == arr[j - 1]) continue;
    
                int left = j + 1;
                int right = n - 1;
    
                while (left < right) {
                    long long sum = (long long)arr[i] + arr[j] + arr[left] + arr[right];
    
                    if (sum == target) {
                        res.push_back({arr[i], arr[j], arr[left], arr[right]});
    
                        // skip duplicates for left and right
                        while (left < right && arr[left] == arr[left + 1]) left++;
                        while (left < right && arr[right] == arr[right - 1]) right--;
    
                        left++;
                        right--;
                    }
                    else if (sum < target) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }
    
        return res;


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
        vector<vector<int> > ans = ob.fourSum(arr, d);
        sort(ans.begin(), ans.end());
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << endl;
        }
        if (ans.empty()) {
            cout << -1 << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends