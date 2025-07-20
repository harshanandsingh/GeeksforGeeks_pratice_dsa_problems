class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        return is_sorted(arr.begin(),arr.end());
    }
};