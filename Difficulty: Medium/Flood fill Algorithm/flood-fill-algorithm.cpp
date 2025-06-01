class Solution {
  public:
    void bfs(vector<vector<int>>&ans ,vector<vector<int>>&vis,int r , int c,int n_c){
        int n = ans.size();
        int m = ans[0].size();
        queue<pair<int,int>>q;
        q.push({r,c});
        vis[r][c] = 1;
        int in_c = ans[r][c];
        ans[r][c] = n_c;
        
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            
            q.pop();
            
            // for(int i=-1;i<=1;i++){
            //     for(int j=-1;j<=1;j++){
            //         int n_row = row + i;
            //         int n_col = col + j;
                    
            //         if(!(i == 0 && j == 0) && n_row >= 0 && n_col >=0 && n_row < n && n_col < m
            //         && !vis[n_row][n_col] && ans[n_row][n_col]==in_c){
            //             q.push({n_row,n_col});
            //             vis[n_row][n_col]=1;
            //             ans[n_row][n_col]=n_c;
            //         }
                    
                    
            //     }
            // }
            
            for (int k = 0; k < 4; k++) {
                int n_row = row + dr[k];
                int n_col = col + dc[k];

                if (n_row >= 0 && n_row < n && n_col >= 0 && n_col < m &&
                    !vis[n_row][n_col] && ans[n_row][n_col] == in_c) {
                    q.push({n_row, n_col});
                    vis[n_row][n_col] = 1;
                    ans[n_row][n_col] = n_c;
                }
            }
            
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        // Code here
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        vector<vector<int>>ans = image;
        int in_c = image[sr][sc];
        
        if (in_c == newColor) return image;
        
        bfs(ans, vis , sr , sc , newColor);
        return ans;
    }
};