class Solution {
public:
    void dfs(int i,int j, vector<vector<int>> &vis, vector<vector<char>>& grid){
        vis[i][j]=1;
        queue<pair<int,int>> q;
        q.push({i,j});
        int n=grid.size();
        int m=grid[0].size();
        
        int delrow[]={0,-1,0,1};
        int delcol[]={1,0,-1,0};
        
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            
            for(int i=0;i<4;i++){
                int nrow=delrow[i] + r;
                    int ncol=delcol[i] + c;
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0 && grid[nrow][ncol]=='1'){
                        vis[nrow][ncol]=1;
                        q.push({nrow, ncol});
                    }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int count=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    dfs(i,j,vis,grid);
                    count++;
                }
            }
        }
        return count;
    }
};