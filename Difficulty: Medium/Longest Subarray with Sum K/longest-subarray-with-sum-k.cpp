class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>m;
        m[0]=-1;
        int n = arr.size();
        int p_sum = 0;
        int max_l = 0;
        
        for(int i=0;i<n;i++){
            p_sum+=arr[i];
            
            if(m.find(p_sum - k) != m.end()){
                max_l = max(max_l,i-m[p_sum-k]);
            }
            
            if(m.find(p_sum) == m.end()){
                m[p_sum]=i;
            }
        }
        return max_l;
    }
};