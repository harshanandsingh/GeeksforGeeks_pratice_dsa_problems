class Solution {
  public:
    int countPartitions(vector<int>& arr, int d) {
        // Code here
        long long int sum = 0;
        int c_0 = 0;
        for(auto x : arr){
            if(x ==  0) c_0++;
            sum+=x;
        }
        
        // s1 - s2 = d
        // s1 + s2 = sum 
        // 2s1 = d + sum 
        // s1 = (d + sum )/ 2 
        
        // so basicaly we have to count number ways we can create sum = s1
        if ((sum + d) % 2 != 0) return 0;
        long long int s1 = (sum + d)/2;
        
        int n = arr.size();
        
        vector<vector<int>>v(n+1,vector<int>(s1+1));
        
        for(int i=0;i<=n;i++) v[i][0 ] = 1; // if s1 = 0 we can always have that even with n=0
        for(int i=1;i<=s1;i++) v[0][i] = 0; // if n = 0 we cant have sum 
        
        for(int i=1;i<=n;i++){
            for(int j =1;j<=s1;j++){
                
                if(arr[i-1] > j || arr[i - 1] == 0){
                    v[i][j] = v[i-1][j];
                }
                else{
                    v[i][j] = v[i-1][j] + v[i-1][j - arr[i-1]];
                }
                
            
            }
        }
        
        return v[n][s1] * pow(2,c_0);
        
        
        
        
    }
};