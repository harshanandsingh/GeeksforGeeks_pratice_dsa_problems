

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int n = arr.size();
        int max_ele = arr[n-1];
        vector<int>ans;
        for(int i = n-1;i>=0 ;i--){
            if(arr[i]>=max_ele){
                ans.push_back(arr[i]);
                max_ele = arr[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};