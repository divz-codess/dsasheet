class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        permutation(nums,0,res);
        return res;
    }
    void permutation(vector<int> &nums,int begin,vector<vector<int>> &res){
        if(begin>=nums.size()){
            res.push_back(nums);
            return;
        }
        for(int i=begin;i<nums.size();i++){
            swap(nums[i],nums[begin]);
            permutation(nums,begin+1,res);
            swap(nums[i],nums[begin]);
        }
    }
};