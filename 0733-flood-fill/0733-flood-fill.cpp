class Solution {
public:
    void dfs(int sr,int sc, vector<vector<int>> &ans, vector<vector<int>> &image, int orcolor, int color){
        ans[sr][sc]=color;
        int delrow[]={0,-1,0,1};
        int delcol[]={1,0,-1,0};
        int n=image.size();
        int m=image[0].size();
        
        for(int i=0;i<4;i++){
            int nrow=sr+delrow[i];
            int ncol=sc+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==orcolor && ans[nrow][ncol]!=color){
                dfs(nrow, ncol, ans, image, orcolor, color);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int orcolor=image[sr][sc];
        vector<vector<int>> ans=image;
        dfs(sr, sc, ans, image, orcolor, color);
        return ans;
    }
};