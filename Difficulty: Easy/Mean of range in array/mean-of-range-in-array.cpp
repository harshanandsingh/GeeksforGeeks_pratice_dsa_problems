//{ Driver Code Starts
// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findMean(vector<int>& arr, vector<int>& q) {
        // Complete the function
        unordered_map<int , int>m;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+= arr[i];
            m[i] = sum;
        } 
        
        vector<int>v;
        for(int i=0;i<q.size();i++){
            if(i*2+1 <q.size()){
                int l = q[i*2];
                int r = q[i*2+1];
                
                if(m.find(l-1)!=m.end()) v.push_back((m[r]-m[l-1])/(r-l+1));
                else v.push_back((m[r]/(r-l+1)));
            }
        }
        return v;
    }
};


//{ Driver Code Starts.
/* Driver program to test above function */
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {

        vector<int> arr, q;
        string input1;
        getline(cin, input1);
        stringstream ss(input1);
        int number1;
        while (ss >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream sss(input2);
        int number2;
        while (sss >> number2) {
            q.push_back(number2);
        }
        Solution ob;
        // Function calling
        vector<int> v;
        v = ob.findMean(arr, q);

        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";

        cout << endl;
        cout << "~" << endl;
        // string tilde;
        // getline(cin, tilde);
    }

    return 0;
}

// } Driver Code Ends