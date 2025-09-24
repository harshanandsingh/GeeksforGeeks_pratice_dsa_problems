class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int l = -1 , s_l = -1;
        for(auto x:arr){
            if(x>l){
                s_l = l;
                l = x;
            }else if(x>s_l && x != l){
                s_l = x;
            }
        }
        return s_l;
    }
};