class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        int max_sum = INT_MIN;
        for(int i=1;i<n;i++){
            max_sum = max(max_sum , arr[i]+arr[i-1]);
        }
        return max_sum;
    }
};