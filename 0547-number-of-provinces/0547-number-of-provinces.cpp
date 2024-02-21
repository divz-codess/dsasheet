class Solution {
public:
    void dfs(int n, vector<int> adj[], vector<int> &vis){
        vis[n]=1;
        for(int i: adj[n]){
            if(vis[i]==0){
                dfs(i,adj,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int> vis(n+1,0);
        
        vector<int> adj[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int count=0;
        
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                count++;
                dfs(i,adj,vis);
            }
        }
        return count;
    }
};