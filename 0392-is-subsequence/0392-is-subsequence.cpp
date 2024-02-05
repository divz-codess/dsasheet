class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int x=0;
        for(char c:t){
            if(s[x]==c){
                x++;
            }
            if(x==n) break;
        }
        return x==n;
    }
};