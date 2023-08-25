class Solution {
public:
    vector<int> rows(int n){
        int ans=1;
        vector<int> res;
        res.push_back(ans);
        for(int i=1;i<n;i++){
            ans=ans*(n-i);
            ans=ans/i;
            res.push_back(ans);
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i=1;i<=numRows;i++){
            result.push_back(rows(i));
        }
        return result;
    }
};