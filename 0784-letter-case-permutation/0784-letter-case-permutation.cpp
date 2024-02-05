class Solution {
public:
    void solve(string ip, string op, vector<string> &ans){
        if(ip==""){
            ans.push_back(op);
            return;
        }
        char ele=ip[0];
        string op1,op2;
        ip.erase(ip.begin());
        if(isalpha(ele)){
            op1=op+(char)toupper(ele);
            op2=op+(char)tolower(ele);
            solve(ip,op1,ans);
            solve(ip,op2,ans);
        }
        else{
            op1=op+ele;
            solve(ip,op1,ans);
        }

        return;
    }
    vector<string> letterCasePermutation(string s) {
        string op="";
        vector<string> ans;
        
        solve(s,op,ans);
        return ans;
    }
};