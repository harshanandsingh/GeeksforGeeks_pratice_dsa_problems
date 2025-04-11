//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to count inversions in the array.
    int merge(vector<int> &arr, vector<int> &temp, int left, int mid, int right) {
        int i = left;     // Left subarray pointer
        int j = mid + 1;  // Right subarray pointer
        int k = left;     // Temp array pointer
        int inv_count = 0;
    
        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
                inv_count += (mid - i + 1); // All remaining elements in left are > arr[j]
            }
        }
    
        while (i <= mid)
            temp[k++] = arr[i++];
        while (j <= right)
            temp[k++] = arr[j++];
    
        for (int x = left; x <= right; x++)
            arr[x] = temp[x];
    
        return inv_count;
    }

    int mergeSort(vector<int> &arr, vector<int> &temp, int left, int right) {
        int inv_count = 0;
        if (left < right) {
            int mid = (left + right) / 2;
    
            inv_count += mergeSort(arr, temp, left, mid);
            inv_count += mergeSort(arr, temp, mid + 1, right);
    
            inv_count += merge(arr, temp, left, mid, right);
        }
        return inv_count;
    }

    int inversionCount(vector<int> &arr) {
        vector<int> temp(arr.size());
        return mergeSort(arr, temp, 0, arr.size() - 1);
    }

    // int inversionCount(vector<int> &arr) {
    //     // Your Code Here
    //     int n = arr.size();
    //     int count=0;
    //     for(int i=n-1;i>=0;i--){
    //         for(int j=i-1;j>=0;j--){
    //             if(arr[j]>arr[i]){
    //               // cout<<arr[j]<<endl;
    //                 count++;
    //             }
    //         }
    //     }
    //     return count;
    // }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends