class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        map<char,int> mp1,mp2;
        for(char i: s){
            mp1[i]++;
        }
        for(char i: t){
            mp2[i]++;
        }
        for(auto i=mp1.begin(),j=mp2.begin();i!=mp1.end()&&j!=mp2.end();i++,j++){
            if(i->first!=j->first || i->second!=j->second) return false;
        }
        return true;
    }
};