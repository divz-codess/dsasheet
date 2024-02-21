class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        // traverse through the grid and fill the queue with rotten oranges
        // Set the rotten ones to vis at 2 and rest at 0, count_fresh++ 
        // simple bfs with delrow and delcol added to each row and col from q and time
        // check all the row and col limits and vis is set to 0 and grid is 1
        // then just set vis to 2 , add nrow & ncol to q, count++[count of fresh that rot]
        // check if count and count fresh are not equal then return -1 else time
        
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        int vis[m][n];
        int count_fresh=0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                else{
                    vis[i][j]=0;
                }
                if(grid[i][j]==1) count_fresh++;
            }
        }
        if(count_fresh==0) return 0;
        
        int time=0;
        int count=0;
        int delrow[]={0,-1,0,1};
        int delcol[]={1,0,-1,0};
        
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            time=max(time, t);
            q.pop();
            
            for(int i=0;i<4;i++){
                int nrow= r+delrow[i];
                int ncol= c+ delcol[i];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && vis[nrow][ncol]==0 && grid[nrow][ncol]==1){
                    vis[nrow][ncol]=2;
                    q.push({{nrow,ncol},t+1});
                    count++;
                }
            }
        }
        if(count!=count_fresh) return -1;
        return time;
    }
};