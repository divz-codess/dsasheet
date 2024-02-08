class Solution {
public:
    void subset(vector<int> &nums, int ind, vector<vector<int>> &ans,vector<int> op){
        if(ind==nums.size()){
            sort(op.begin(),op.end());
            ans.push_back(op);
            return;
        }
        subset(nums,ind+1,ans,op);
        vector<int> op1=op;
        op1.push_back(nums[ind]);
        subset(nums, ind+1, ans,op1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> op;
        subset(nums,0,ans,op);
        map<vector<int>,int> mp;
        for(vector<int> i:ans){
            mp[i]++;
        }
        ans.clear();
        for(auto i=mp.begin();i!=mp.end();i++){
            ans.push_back(i->first);
        }
        return ans;
    }
};