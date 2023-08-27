class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto i: s){
            if(i=='(' || i=='{' || i=='['){
                st.push(i);
            }
            else{
                if(st.empty()) return false;
                char c=st.top();
                st.pop();
                if((c=='[' && i==']') || (c=='{' && i=='}') || (c=='(' && i==')')){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};