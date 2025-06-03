class Solution {
  public:
    int orangesRotting(vector<vector<int>>& mat) {
        // Code here
        
        int n = mat.size();
        int m = mat[0].size();
        
        queue<pair<pair<int,int>,int>>q;
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j] == 2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
            }
        }
        
        vector<int>row_up = {-1,1,0,0};
        vector<int>cal_up = {0,0,-1,1};
        int max_t = 0;
        while(!q.empty()){
            int x = q.front().first.first;
            int y = q.front().first.second;
            int t = q.front().second;
            max_t = max(t,max_t);
            
            q.pop();
            
            for(int i=0;i<4;i++){
                int row = x + row_up[i];
                int cal = y + cal_up[i];
                
                if(row>=0 && cal >=0 && row<n && cal < m && !vis[row][cal] && mat[row][cal]==1){
                    vis[row][cal]=2;
                    q.push({{row,cal},t+1});
                }
            }
            
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1 && vis[i][j]==0) return -1;
            }
        }
        return max_t;
        
    }
};