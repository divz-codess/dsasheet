class Solution {
public:
    // solve is used to check if the string in the limits is palindrome or not
    bool solve(string &s, int i, int j, vector<vector<int>> &t){
        if(i>j) // will arise only via call through solve function
            return true;
        if(t[i][j]==-1){
            t[i][j]= (s[i]==s[j]) && (solve(s, i+1, j-1, t));
        }
        return t[i][j]; //return T/F i.e. 1/0
    }
    int countSubstrings(string s) {
        int n=s.length();
        vector<vector<int>> t(n+1, vector<int>(n+1, -1));
        int ans=0;
        // in dono loops se maine substrings nikale and then I will check if they are 
        // a palindrome or not
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                ans+=solve(s, i, j, t);
            }
        }
        return ans;
    }
};