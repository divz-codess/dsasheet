class Solution {
public:
    string frequencySort(string s) {
        map <char,int> ss;
        for(char i:s){
            ss[i]++;
        }
        vector<pair<int,char>> pp;
        for(auto i: ss){
            pp.push_back({i.second,i.first});
        }
        sort(pp.rbegin(),pp.rend());
        
        string str="";
        for(auto i: pp){
            int num=i.first;
            while(num>0){
                str+=i.second;
                num--;
            }
        }
        return str;
    }
};