class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int vis[n][m];
        queue<pair<pair<int,int>, int>> q;
        int count_fresh=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                else{
                    vis[i][j]=0;
                }
                if(grid[i][j]==1){
                    count_fresh++;
                }
            }
        }
        cout<<"hi";
        
        if(count_fresh==0) return 0;
        
        int time=0;
        int count=0;
        int del_row[]={0,1,0,-1};
        int del_col[]={1,0,-1,0};
        
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            time=max(time, t);
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=r+del_row[i];
                int ncol=c+del_col[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0 && grid[nrow][ncol]==1){
                    vis[nrow][ncol]=2;
                    q.push({{nrow,ncol}, t+1});
                    count++;
                }
            }
        }
        if(count!=count_fresh) return -1;
        return time;
    }
};