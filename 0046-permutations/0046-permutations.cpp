class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        return perm(nums,0,nums.size()-1,res);
    }
    vector<vector<int>> perm(vector<int> nums,int l,int r,vector<vector<int>> &res){
        if(l==r){
            res.push_back(nums);
            return res;
        }
        for(int i=l;i<=r;i++){
            swap(nums[i],nums[l]);
            perm(nums,l+1,r,res);
            swap(nums[i],nums[l]);
        }
        return res;
    }
};