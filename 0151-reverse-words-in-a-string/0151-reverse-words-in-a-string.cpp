class Solution {
public:
    string reverseWords(string s) {
        
        string ans="",s1="";
        int x=0;
        
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                s1+=s[i];
            }
            if(s1!="" && s[i]==' '){
                x++;
                ans=s1+' '+ans;
                s1="";
            }
        }
        if(x==0) return s;
        if(s1!=""){
            return s1+' '+ans.erase(ans.length()-1);
        }
        else 
            return ans.erase(ans.length()-1);
        
      
    }
};