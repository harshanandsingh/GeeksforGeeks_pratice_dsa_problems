//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool yes(vector<int>arr,int m , int mid,int k){
        int count =0,flower=0;
        for(auto x:arr){
            if(x<=mid){
                flower++;
                if(flower==k){
                    count++;
                    flower=0;
                }
            }
            else flower=0;
        }
        return count>=m;
    }
    int minDaysBloom(int m, int k, vector<int> &arr) {
        // Code here
        if((long long int)m*k >arr.size()) return -1;
        
        int low = *min_element(arr.begin(),arr.end());
        int high = *max_element(arr.begin(),arr.end());
        int ans = -1;
        
        while(low<=high){
            int mid = low + (high - low)/2;
            bool res = yes(arr,m,mid,k);
            if(res){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans ;
    }
};


//{ Driver Code Starts.
int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        getline(cin, str);
        int m = stoi(str);
        getline(cin, str);
        int k = stoi(str);
        Solution obj;
        cout << obj.minDaysBloom(m, k, arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends