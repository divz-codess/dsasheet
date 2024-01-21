class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        vector<int> ans(nums.size());
        int pos=nums.size()-1;
        
        while(start<=end){
            if(abs(nums[start])<abs(nums[end])){
                ans[pos--]=nums[end]*nums[end--];
            }
            else{
                ans[pos--]=nums[start]*nums[start++];
            }
        }
        return ans;
    }
};