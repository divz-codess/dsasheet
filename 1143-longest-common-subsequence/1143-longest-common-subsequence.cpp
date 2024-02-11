class Solution {
public:
    int solve(string &text1, string &text2, int n, int m, vector<vector<int>> &t){
        if(n==0||m==0) return 0;
        if(t[n][m]!=-1) return t[n][m];
        
        if(text1[n-1]==text2[m-1]){
            t[n][m]=1+solve(text1, text2, n-1, m-1, t);
            return t[n][m];
        }
        else{
            t[n][m]=max(solve(text1, text2, n-1, m, t), solve(text1, text2, n, m-1, t));
            return t[n][m];
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> t(text1.length()+1, vector<int> (text2.length()+1, -1));
        return solve(text1, text2,text1.length(), text2.length(), t);
    }
};