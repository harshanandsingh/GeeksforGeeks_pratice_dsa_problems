//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        // long long int count=0,c1=0,c0=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         if(arr[j]==1) c1++;
        //         else c0++;
                
        //         if(c1==c0) count++;
        //     }
        //     c1=0,c0=0;
        // }
        // return count;
        
        std::unordered_map<int, int> prefixSumFreq;
        int sum = 0;
        long long int count = 0;
    
        // Initialize with sum 0 having frequency 1
        prefixSumFreq[0] = 1;
    
        for (int i = 0; i < n; i++) {
            // Replace 0 with -1
            if (arr[i] == 0) arr[i] = -1;
    
            sum += arr[i];
    
            // If this sum has been seen before, add its frequency to count
            if (prefixSumFreq.find(sum) != prefixSumFreq.end()) {
                count += prefixSumFreq[sum];
            }
    
            // Update the frequency of the current prefix sum
            prefixSumFreq[sum]++;
        }
    
        return count;
    }
};


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends