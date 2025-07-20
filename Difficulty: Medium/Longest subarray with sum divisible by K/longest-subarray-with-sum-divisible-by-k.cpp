// User function template for C++
class Solution {
  public:
    // int longestSubarrayDivK(vector<int>& arr, int k) {
    //     // Complete the function
        
    //     // it is a sime problem as -> remaning prefix sum -> we have to sore remider 
    //     int n = arr.size();
    //     unordered_map<int,int>m;
    //     m[0]=-1;
        
    //     int l_len = 0;
    //     int p_sum = 0;
    //     for(int i=0;i<n;i++){
    //         p_sum += arr[i];
            
    //         int rem = p_sum % k;
        
    //         // Normalize negative remainder
    //         if (rem < 0) rem += k; // -5 % 3 = -2 but we want it to behave like 1 
            
    //         if(m.find(rem) != m.end()){
    //             l_len = max(l_len , i - m[rem] );
    //         }
            
    //         if(m.find(rem) == m.end()){
    //             m[rem]=i;
    //         }
    //     }
    //     return l_len;
    // }
    int longestSubarrayDivK(vector<int>& arr, int k) {
        
        int n = arr.size(), res = 0;
        unordered_map<int, int> prefIdx;
        int sum = 0;

        // Iterate over all ending points
        for (int i = 0; i < n; i++) {

            // prefix sum mod k (handling negative prefix sum)
            sum = ((sum + arr[i]) % k + k) % k;

            // If sum == 0, then update result with the
            // length of subarray arr[0...i]
            if (sum == 0)
                res = i + 1;

            // Update max length for repeating sum
            else if (prefIdx.find(sum) != prefIdx.end()) {
                res = max(res, i - prefIdx[sum]);
            }

            // Store the first occurrence of sum
            else {
                prefIdx[sum] = i;
            }
        }
        return res;
        // int n = arr.size();
        // unordered_map<int, int> m;
        // // m[0] = -1;  // Handle subarray from beginning
    
        // int l_len = 0;
        // int p_sum = 0;
    
        // for (int i = 0; i < n; i++) {
        //     p_sum += arr[i];
    
        //     // int rem = p_sum % k;
        //     int rem = p_sum % k ;
        //     if(rem == 0 ){
        //         l_len = i+1;
        //     }
            
        //     if(rem<0) rem+=k;
            
        //     if(m.find(rem) != m.end()){
        //         l_len = max(l_len,i-m[rem]);
        //     }else{
        //          m[rem] = i;
        //     }
        // }
    
        // return l_len;
    }
    
    
};