//{ Driver Code Starts
// here

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        // vector<int>ans;
        // int i=0,j=0,k=0,n=arr1.size(),m=arr2.size(),o=arr3.size();
        
        // while(i<n && j<m && k<o){
        //     int max_ = max({arr1[i],arr2[j],arr3[k]});
        //     if(arr1[i]<max_) i++;
        //     if(arr2[j]<max_) j++;
        //     if(arr3[k]<max_) k++;
            
        //     if(i>=n || j>=m || k>=o) break;
            
        //     if(arr1[i]==arr2[j] && arr1[i]==arr3[k]){
        //         ans.push_back(arr1[i]);
        //         i++;
        //         j++;k++;
        //     }
        // }
        
        // k=0;
        // for(int i=0;i<ans.size();i++){
        //     if(ans[i]>ans[k]) ans[++k]=ans[i];
        // }
        
        // return vector<int>(ans.begin(),ans.begin()+k+1);
        
        vector<int> ans;
        int i = 0, j = 0, k = 0;
        int n = arr1.size(), m = arr2.size(), o = arr3.size();
    
        while (i < n && j < m && k < o) {
            if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
                // Avoid duplicate entries in ans
                if (ans.empty() || ans.back() != arr1[i])
                    ans.push_back(arr1[i]);
                i++;
                j++;
                k++;
            } else {
                int max_val = max({arr1[i], arr2[j], arr3[k]});
                if (arr1[i] < max_val) i++;
                if (arr2[j] < max_val) j++;
                if (arr3[k] < max_val) k++;
            }
        }
    
        // If no common elements, return -1
        if (ans.empty()) return {-1};
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr, crr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        string input3;
        getline(cin, input3);
        stringstream ss3(input3);
        int number3;
        while (ss3 >> number3) {
            crr.push_back(number3);
        }
        Solution ob;
        vector<int> res = ob.commonElements(arr, brr, crr);
        if (res.size() == 0)
            cout << -1;
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl << "~\n";
    }
}
// } Driver Code Ends