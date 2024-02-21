class Solution {
public:
    void dfs(int n, vector<vector<int>> &grid, vector<int> &vis){
        vis[n]=1;
        
            for(int i=0;i<grid.size();i++){
                if(grid[n][i]==1 && vis[i]==0){
                    dfs(i,grid,vis);
                }
            }
    }
    int findCircleNum(vector<vector<int>>& grid) {
        vector<int> vis(grid.size()+1,0);
        int count=0;
        
        for(int i=0;i<grid.size();i++){
            if(vis[i]==0){
                count++;
                dfs(i,grid,vis);
            }
        }
        return count;
    }
};