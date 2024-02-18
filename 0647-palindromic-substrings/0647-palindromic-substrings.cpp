class Solution {
public:
    bool solve(string &s, int i, int j, vector<vector<int>> &t){
        if(i>j) return true;
        if(t[i][j]==-1){
            t[i][j]= (s[i]==s[j]) && (solve(s, i+1, j-1, t));
        }
        return t[i][j];
    }
    int countSubstrings(string s) {
        int n=s.length();
        vector<vector<int>> t(n+1, vector<int>(n+1, -1));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                ans+=solve(s, i, j, t);
            }
        }
        return ans;
    }
};