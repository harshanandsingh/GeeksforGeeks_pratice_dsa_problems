class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        
        int max_sum = INT_MIN;
        int sum=0;
        int j=0,i=0;
        while(j<n){
            sum+=arr[j];
            
            // if(j-i+1 < k) j++;
            if(j-i+1 > k) sum-=arr[i++];
            
            max_sum = max(sum,max_sum);
            
            
            j++;
        }
        return max_sum;
    }
};