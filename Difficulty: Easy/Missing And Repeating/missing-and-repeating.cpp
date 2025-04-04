//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();

        long long sum_ideal = (long long)n * (n + 1) / 2;
        long long sumsq_ideal = (long long)n * (n + 1) * (2 * n + 1) / 6;
    
        long long sum_actual = 0, sumsq_actual = 0;
        for (int num : arr) {
            sum_actual += num;
            sumsq_actual += (long long)num * num;
        }
    
        long long diff = sum_actual - sum_ideal;            // b - a
        long long diff_sq = sumsq_actual - sumsq_ideal;     // b^2 - a^2
    
        long long sum_ba = diff_sq / diff;                  // b + a
    
        int b = (diff + sum_ba) / 2;
        int a = b - diff;
    
        return { b,a};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends