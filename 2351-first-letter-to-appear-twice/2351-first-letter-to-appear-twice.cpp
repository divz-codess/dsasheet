class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> m;
        for(char &i: s){
            m[i]++;
            if(m[i]==2) return i;
        }
        return 'z';
    }
};