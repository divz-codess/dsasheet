class Solution {
public:
    void solve(vector<int> &nums, int ind, vector<vector<int>> &ans, vector<int> op){
        if(ind>=nums.size()){
            ans.push_back(op);
            return;
        }
        op.push_back(nums[ind]);
        solve(nums,ind+1,ans,op);
        op.pop_back();
        solve(nums,ind+1,ans,op);
        return;
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> op;
        solve(nums,0,ans,op);
        return ans;
    }
};