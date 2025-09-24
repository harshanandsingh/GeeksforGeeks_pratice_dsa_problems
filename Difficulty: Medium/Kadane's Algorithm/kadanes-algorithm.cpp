class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int max_sum = arr[0];
        int max_ans = arr[0];
        int n = arr.size();
        for(int i=1;i<n;i++){
            max_sum = max(max_sum+arr[i] , arr[i]);
            max_ans = max(max_sum , max_ans);
        }
        return max_ans;
    }
};