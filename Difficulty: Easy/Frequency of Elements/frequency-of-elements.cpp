class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
        unordered_map<int,int>m;
        for(auto x:arr){
            m[x]++;
        }
        
        vector<vector<int>>ans;
        for(auto [a,b] : m){
            ans.push_back({a,b});
        }
        return ans;
    }
};