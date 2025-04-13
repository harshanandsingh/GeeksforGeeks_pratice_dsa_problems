//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> maxPrefixes(vector<int>& arr, vector<int>& l,vector<int>& r) {
        
        unordered_map<int,int>m;
        int sum=arr[0];
        m[0]=sum;
        for(int i=1;i<arr.size();i++){
            sum+=arr[i];
            m[i]=max(sum,m[i-1]);
        }
        
        int sum1 =0;
        vector<int>pre(arr.size());
        for(int i=0;i<arr.size();i++){
            sum1+=arr[i];
            pre[i]=sum1;
        }
        
        
        vector<int>v;
        for(int i=0;i<l.size();i++){
            //v.push_back(m[r[i]]);
            if(m.find(l[i]-1)!=m.end()) v.push_back((m[r[i]]-pre[l[i]-1]));
            else v.push_back(m[r[i]]);
        }
        return v;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Consume the newline after t

    while (t--) {
        string line;

        // Read array
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        // Read queries
        getline(cin, line);
        stringstream ssl(line);
        vector<int> leftIndex, rightIndex;
        int left, right;
        while (ssl >> left)
            leftIndex.push_back(left);

        getline(cin, line);
        stringstream ssr(line);
        while (ssr >> right)
            rightIndex.push_back(right);

        Solution obj;
        vector<int> result = obj.maxPrefixes(arr, leftIndex, rightIndex);
        for (int i : result) {
            cout << i << " ";
        }
        cout << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends