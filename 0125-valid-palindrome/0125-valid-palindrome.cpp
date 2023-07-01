class Solution {
public:
    bool isPalindrome(string s2) {
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        string s1,s3;
        for(int i=0;i<s2.length();i++){
         if((int)s2[i]>=97&&(int)s2[i]<=122 || (int)s2[i]>=48&&(int)s2[i]<=57){
             s1+=(s2[i]);
             
         }   
        }
        s3=s1;
        reverse(s1.begin(), s1.end());
        //cout<<s1;
        if(s1==s3)
            return true;
        else 
            return false;
    }
};