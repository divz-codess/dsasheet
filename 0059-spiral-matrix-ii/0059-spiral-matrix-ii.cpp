class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
        
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=n-1;
        
        int k=0;
        while(top<=bottom && left<=bottom){
            for(int i=left;i<=right;i++){
                k++;
                ans[top][i]=k;
            }
            top++;
            // if(k==(n*n)) break;
            for(int i=top;i<=bottom;i++){
                k++;
                ans[i][right]=k;
            }
            right--;
            //if(k==(n*n)) break;
            if(left<=right){
                for(int i=right;i>=left;i--){
                    k++;
                    ans[bottom][i]=k;
                }
                bottom--;
            }
            if(top<=bottom){
                for(int i=bottom;i>=top;i--){
                    ans[i][left]=++k;
                }
                left++;
            }
        }
        
        return ans;
    }
};