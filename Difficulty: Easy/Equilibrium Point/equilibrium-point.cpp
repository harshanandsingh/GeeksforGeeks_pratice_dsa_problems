class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int sum=0;
        for(auto x:arr) sum+=x;
        
        int new_sum=0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(sum-new_sum-arr[i]==new_sum) return i;
            new_sum+=arr[i];
        }
        return -1;
        
    }
};