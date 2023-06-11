class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        vector<int> res(nums.size());
        for(int i=nums.size()-1;i>=0;i--){
            if(abs(nums[l])>abs(nums[r])){
                res[i]=(nums[l]*nums[l]);
                l++;
            }
            else
                res[i]=(nums[r]*nums[r--]);
        }
        return res;
    }
};