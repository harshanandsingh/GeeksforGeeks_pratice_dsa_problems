//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int totalElements(vector<int> &arr) {
        
        int n = arr.size();
        
        int i=0,j=0,ans=0;
        
        unordered_map<int,int>m;
        
        // while(j<n){
        //     m[arr[j]]++;
            
        //     if(m.size()<2){
        //         j++;
        //         cout<<j<<endl;
        //     }
            
        //     else if(m.size()==2){
        //         cout<<j<<endl;
        //         count = 0;
        //         for(auto x : m){
        //             count+= x.second;
        //         }
        //         ans = max(ans,count);
        //         cout<<ans<<endl;
        //         j++;
        //     }
        //     else{
        //         int a = arr[i];
        //         m.erase(arr[i]);
        //         for(int x:arr){
        //             if(x==a) i++;
        //         }
        //         j++;
        //     }
        // }
        
        while (j < arr.size()) {
            m[arr[j]]++;
    
            while (m.size() > 2) {
                m[arr[i]]--;
                if (m[arr[i]] == 0) {
                    m.erase(arr[i]);
                }
                i++;
            }
    
            int windowSize = j - i + 1;
            ans = max(ans, windowSize);
            j++;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        int ans = ob.totalElements(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends