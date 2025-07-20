class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum+=arr[i];
        }
        
        int p_sum = 0;
        for(int i=0;i<n;i++){
            
            if(sum - arr[i]-p_sum == p_sum) return i;
            p_sum+=arr[i];
        }
        return -1;
    }
};