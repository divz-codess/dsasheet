class Solution {
public:
    int minDistance(string w1, string w2) {
        int n=w1.length();
        int m=w2.length();
        
        vector<vector<int>> t(n+1, vector<int>(m+1));
        // if a string is empty then we need that no of insertions as the other non-
        // empty string hence equal to i or j
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0) t[i][j]=j;
                if(j==0) t[i][j]=i;
            }
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(w1[i-1]==w2[j-1]){
                    t[i][j]=t[i-1][j-1]; // same h toh no need to do anything
                }
                else
                    // otherwise consider 3 situations: insertion: t[i-1][j]
                    // deletion: t[i][j-1]
                    // replace: t[i-1][j-1]
                    // out of the 3 we find the one with lowest cost and +1 as this 
                    // operation is included
                    t[i][j]=1+min(t[i-1][j],min(t[i][j-1], t[i-1][j-1]));
            }
        }
        
        return t[n][m];
    }
};