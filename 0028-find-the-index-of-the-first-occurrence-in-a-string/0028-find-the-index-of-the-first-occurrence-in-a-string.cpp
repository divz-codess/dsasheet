class Solution {
public:
    int strStr(string haystack, string needle) {
        string ss="";
        int l=needle.length();
        for(int i=0;i<haystack.length();i++){
            if(haystack[i]==needle[0]){
                ss=haystack.substr(i,l);
                if(ss==needle){
                    return i;
                }
            }
        }
        return -1;
    }
};