class Solution {
public:
    void dfs(int k, int j, vector<vector<int>> &vis, vector<vector<char>>& board, int n, int m){
        vis[k][j]=1;
        int delrow[]={0,-1,0,1};
        int delcol[]={1,0,-1,0};
        for(int i=0;i<4;i++){
            int r=k+delrow[i];
            int c=j+delcol[i];
            if(r>=0 && r<n && c>=0 && c<m && vis[r][c]==0 && board[r][c]=='O'){
                dfs(r,c,vis,board,n,m);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int j=0;j<m;j++){
            if(board[0][j]=='O' && vis[0][j]==0){
                    dfs(0,j,vis,board,n,m);
                }
                if(board[n-1][j]=='O' && vis[n-1][j]==0){
                    dfs(n-1,j,vis,board,n,m);
                }
        }
        for(int i=0;i<n;i++){
            if(board[i][0]=='O' && vis[i][0]==0){
                    dfs(i,0,vis,board,n,m);
                }
                if(board[i][m-1]=='O' && vis[i][m-1]==0){
                    dfs(i,m-1,vis,board,n,m);
                }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O'&& vis[i][j]==0){
                    board[i][j]='X';
                }
            }
        }
    }
};