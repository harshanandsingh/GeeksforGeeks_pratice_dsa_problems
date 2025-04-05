//{ Driver Code Starts
// Initial Template for C++
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>& arr, int s) {
        
        int n = arr.size();
        
        int i=0,j=0;
        
        int sum=0;
        
        while(j<n){
            sum+=arr[j];
            
            
            while(sum>s && i <= j) sum-=arr[i++];
            
            if(sum == s && i <= j) return{i+1,j+1};
            
            j++;
        }
        return {};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t-- > 0) {
        string str;
        getline(cin, str);

        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        int sum;
        cin >> sum;
        cin.ignore();

        Solution sln;
        vector<int> list = sln.subarraySum(arr, sum);
        if (list.size() == 0)
            cout << "[]" << endl;
        else {
            for (int i : list)
                cout << i << " ";
            cout << endl;
        }
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends