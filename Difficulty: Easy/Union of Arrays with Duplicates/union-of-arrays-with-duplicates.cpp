class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int>s;
        for(int i=0;i<a.size();i++){
            s.insert(a[i]);
        }
        for(int i=0;i<b.size();i++){
            s.insert(b[i]);
        }
        vector<int>v;
        for(auto x:s){
            v.push_back(x);
        }
        return v;
    }
};