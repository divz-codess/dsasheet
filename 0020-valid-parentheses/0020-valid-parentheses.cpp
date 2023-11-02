class Solution {
public:
    bool isValid(string s) {
        stack<char> ss;
        for(char& i: s){
            if(i=='('||i=='{'||i=='['){
                ss.push(i);
            }
            else{
                if(ss.empty()) return false;
                char c=ss.top();
                ss.pop();
                if(c=='('&&i==')'||c=='{'&&i=='}'||c=='['&&i==']'){
                    continue;
                }
                else return false;
            }
        }
        if(ss.empty()) return true;
        return false;
    }
};