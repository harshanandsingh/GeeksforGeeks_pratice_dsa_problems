class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n = arr.size();
        
        int i = 0, j = 0;
        int sum = 0;
        while(j<n){
            sum+=arr[j];
            
            while(i<=j && sum>target){
                sum-=arr[i++];
            }
            
            if(sum == target) return {i+1,j+1};
            j++;
        }
        return {-1};
    }
};