

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m= matrix.size();
        int n= matrix[0].size();
        vector<vector<int>> c=matrix; 
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(c[i][j]==0){
                    for(int k=0;k<m;k++){
                        matrix[k][j]=0;
                    }
                    for(int l=0;l<n;l++){
                        matrix[i][l]=0;
                    }
                    
                }
            }
        }

    }
};
