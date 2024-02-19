class Solution {
public:
    int minDistance(string w1, string w2) {
        int n=w1.length();
        int m=w2.length();
        
        vector<vector<int>> t(n+1, vector<int>(m+1));
        
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0) t[i][j]=j;
                if(j==0) t[i][j]=i;
            }
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(w1[i-1]==w2[j-1]){
                    t[i][j]=t[i-1][j-1];
                }
                else
                    t[i][j]=1+min(t[i-1][j],min(t[i][j-1], t[i-1][j-1]));
            }
        }
        
        return t[n][m];
    }
};