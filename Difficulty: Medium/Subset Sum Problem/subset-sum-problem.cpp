class Solution {
  public:
   bool k_p(int n , int w ,  vector<int>&wei,vector<vector<bool>>&mem){

        // base case 
        for(int i = 0; i <= n; i++) mem[i][0] = true;     // sum 0 is always possible
        for(int j = 1; j <= w; j++) mem[0][j] = false;     // can't form positive sum with 0 elements

        // now filling rest of the table 
        for(int i=1;i<=n;i++){
            for(int j=1;j<=w;j++){

                // weight[i-1] > j put element just abouve it 
                if(wei[i-1] > j) mem[i][j] = mem[i-1][j];

                // now we have toke decision , take element or not 
                else mem[i][j] = mem[i-1][j] || mem[i-1][j-wei[i-1]];
            }
        }
        return mem[n][w];
        
        
        
        
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        vector<vector<bool>>mem(n+1,vector<bool>(sum+1));
        return k_p(n,sum,arr,mem);
    }
};