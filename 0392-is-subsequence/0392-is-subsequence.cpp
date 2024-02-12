class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.length();
        int n=t.length();
        
        int res=0;
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j]= 1 + dp[i-1][j-1];
                    res=max(res, dp[i][j]);
                }
                else{
                    dp[i][j]=max( dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return (m==res);
    }
};