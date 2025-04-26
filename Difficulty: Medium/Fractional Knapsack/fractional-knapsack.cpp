//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        
        int n = val.size(); // fixed 'sizd' typo
        vector<pair<double, pair<int, int>>> res; // {ratio, {weight, value}}
        
        for (int i = 0; i < n; i++) {
            double ratio = (double)val[i] / wt[i];
            res.push_back({ratio, {wt[i], val[i]}});
        }
        
        // Sort in descending order of ratio
        sort(res.rbegin(), res.rend());
        
        double sum = 0.0;
        
        for (int i = 0; i < n; i++) {
            int currWt = res[i].second.first;
            int currVal = res[i].second.second;
            
            if (capacity >= currWt) {
                // Take full item
                sum += currVal;
                capacity -= currWt;
            } else {
                // Take fraction of the item
                sum += res[i].first * capacity; // ratio * remaining capacity
                break; // knapsack is now full
            }
        }
        
        return (sum * 1e6) / 1e6;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    // taking testcases
    cin >> t;
    cin.ignore(); // to ignore the newline after the number of test cases
    cout << setprecision(6) << fixed;

    while (t--) {
        // Reading the value array
        vector<int> values;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            values.push_back(number);
        }

        // Reading the weight array
        vector<int> weights;
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            weights.push_back(number);
        }

        // Reading the capacity
        int w;
        cin >> w;
        cin.ignore(); // to ignore the newline after capacity

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(values, weights, w) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends