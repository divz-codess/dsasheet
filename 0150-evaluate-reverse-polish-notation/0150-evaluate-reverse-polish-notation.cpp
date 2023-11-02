class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(string& i: tokens){
            if(i != "+" && i != "-" && i != "*" && i != "/"){
                int n=stoi(i);
                s.push(n);
            }
            else{
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                if(i=="+"){
                    int ans=b+a;
                    s.push(ans);
                }
                else if(i=="-"){
                    int ans=b-a;
                    s.push(ans);
                }
                else if(i=="*"){
                    int ans=b*a;
                    s.push(ans);
                }
                else{
                    int ans=b/a;
                    s.push(ans);
                }
            }
        }
        return s.top();
    }
};