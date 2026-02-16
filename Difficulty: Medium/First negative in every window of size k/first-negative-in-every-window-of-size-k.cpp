class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        queue<int>q;
        int n = arr.size();
        
        vector<int>ans;
        
        for(int i=0;i<k;i++){
            if(arr[i]<0) q.push(arr[i]);
        }
        if(!q.empty()) ans.push_back(q.front());
        else ans.push_back(0);
        
        for(int i=k;i<n;i++){
            
            if(!q.empty() && q.front() == arr[i-k]) q.pop(); 
            if(arr[i]<0) q.push(arr[i]);
            if(!q.empty()) ans.push_back(q.front());
            else ans.push_back(0);
            
        }
        return ans;
        
    }
};