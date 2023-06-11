class Solution {
public:
    vector<int> row(int n){
        vector<int> res;
        int ans=1;
        res.push_back(ans);
        for(int i=1;i<n;i++){
            ans=ans*(n-i);
            ans=ans/i;
            res.push_back(ans);
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(row(i));
        }
        return ans;
    }
};