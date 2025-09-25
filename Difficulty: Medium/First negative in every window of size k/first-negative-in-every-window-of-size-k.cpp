//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        int n = arr.size();
        
        int i=0,j=0;
        
        //vector<int>neg_no;
        queue<int>neg_no;
        vector<int>ans;
        
        while(j<n){
            if(arr[j]<0) neg_no.push(arr[j]);
            
            if(j-i+1 == k){
                
                if(!neg_no.empty()){
                    ans.push_back(neg_no.front());
                    
                    if(arr[i]==neg_no.front()){
                        neg_no.pop();
                        
                    }
                }
                else ans.push_back(0);
                i++;
            }
            j++;
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
        vector<int> ans = ob.firstNegInt(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends