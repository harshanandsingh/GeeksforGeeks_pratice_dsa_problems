class Solution {
  public:
    int findMin(int n) {
        // code here
        vector<int>coin = {10,5,2,1};
        
        int total_coin = 0;
        int i=0;
        while(n>0){
            total_coin += n/coin[i];
            n %= coin[i];
            i++;
        }
        return total_coin;
    }
};