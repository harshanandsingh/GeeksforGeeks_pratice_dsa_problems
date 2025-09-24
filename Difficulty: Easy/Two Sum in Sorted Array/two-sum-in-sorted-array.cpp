class Solution {
  public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // code here
        unordered_map<int,int>m;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(m.count(target-arr[i])){
                return {m[target-arr[i]]+1,i+1};
            }
            m[arr[i]]=i;
        }
        return {-1,-1};
    }
};