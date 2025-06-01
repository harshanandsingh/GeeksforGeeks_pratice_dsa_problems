class Solution {
  public:
    void bfs(vector<vector<int>> &vis,vector<vector<char>>& grid,int row , int col ){
        queue<pair<int,int>>q;
        q.push({row,col});
        vis[row][col]=1;
        int n = grid.size();
        int m = grid[0].size();
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            
            q.pop();
            
            for(int i= -1 ;i<=1;i++){
                for(int j = -1;j<=1;j++){
                    int c_row = r + i;
                    int c_col = c + j;
                    
                    if(c_row >=0 && c_row < n && c_col >=0 && c_col < m && !vis[c_row][c_col]
                     && grid[c_row][c_col]=='L'){
                         q.push({c_row,c_col});
                         vis[c_row][c_col] = 1;
                     }
                }
            }
            
        }
    }
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        int  count = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='L'){
                    bfs(vis,grid,i,j);
                    count++;
                }
            }
        }
        
        return count;
    }
};