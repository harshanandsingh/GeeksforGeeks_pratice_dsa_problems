class Solution {
  public:
    // Function to count the number of subarrays with a sum that is divisible by K
    int subCount(vector<int>& arr, int k) {
        // Your code goes here
        int n = arr.size();
        unordered_map<int,int>m;
        m[0]=1;
        int count=0;
        int sum = 0;
        
        for(int i=0;i<n;i++){
            sum = ((sum + arr[i]) % k + k ) %k;
            
            if(m.find(sum)!= m.end()) count+=m[sum];
            
            m[sum]++;
        }
        return count;
    }
};
