class Solution {
public:
    vector<int> row(int n){
        int ans=1;
        vector<int> rowvec;
        rowvec.push_back(1);
        for(int i=1;i<n;i++){
            ans=ans*(n-i);
            ans/=i;
            rowvec.push_back(ans);
        }
        return rowvec;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(row(i));
        }
        return ans;
        
    }
};