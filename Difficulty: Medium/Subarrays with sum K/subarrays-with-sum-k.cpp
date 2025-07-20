class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        unordered_map<int,int>m;
        m[0]=1;
        int count=0;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            
            if(m.find(sum - k) != m.end()){
                count+=m[sum-k];
            }
            m[sum]++;
        }
        return count;
    }
};