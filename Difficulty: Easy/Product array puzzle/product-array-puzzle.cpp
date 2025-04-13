//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n = arr.size();
        int flag = 0;
        
        long long int pro=1;
        for(int x:arr){
            if(x !=0) pro*=x;
            
            if(x == 0) flag++;
        }
        
        //cout<<pro<<" "<<flag<<endl;
        
        for(int &x:arr){
            if(flag >=2) x=0;
            else if(flag == 1){
                if(x==0) x=pro;
                else x=0;
            }
            else{
                x=pro/x;
            }
        }
        
        return arr;
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
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends