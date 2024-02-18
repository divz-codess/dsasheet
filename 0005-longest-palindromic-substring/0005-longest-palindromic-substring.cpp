class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        vector<vector<int>> t(n+1, vector<int>(n+1, 0));
        string ss=s;
        reverse(ss.begin(), ss.end());
        int res=0;
        string s1;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                if(s[i-1]==ss[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                    if(res<t[i][j]){
                        string temp=s.substr(i-t[i][j], t[i][j]);
                        string temp2=temp;
                        reverse(temp2.begin(), temp2.end());
                        if(temp==temp2){
                            s1=temp;
                            res=t[i][j];
                        }
                    }
                }
                else{
                    t[i][j]=0;
                }
            }
        }
        
        return s1;
    }
};