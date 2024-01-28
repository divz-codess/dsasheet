class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int r=matrix.size();
        int c=matrix[0].size();
        
        int top=0;
        int bottom=r-1;
        int left=0;
        int right=c-1;
        
        while(top<=bottom && left<=right){
            
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            if(ans.size()==(r*c)) break;
            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(ans.size()==(r*c)) break;
            if(left<=right){
                for(int i=right;i>=left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(top<=bottom){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            
        }
        
        return ans;
    }
};