class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        
        permutat(nums,0,nums.size()-1,res);
        
        return res;
    }
    
    void permutat(vector<int> &nums, int l, int r, vector<vector<int>> &res){
        if(l>=r){
            res.push_back(nums);
            return;
        }
        for(int i=l;i<=r;i++){
            swap(nums[i],nums[l]);
            
            permutat(nums,l+1,r,res);
            
            swap(nums[i],nums[l]);
        }
        
    }
};