class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums[0];
        vector<int> ans=nums;
        nums.clear();
        nums.push_back(n);
        for(int i=1;i<ans.size();i++){
            
            if(n!=ans[i]){
                nums.push_back(nums[i]);
            }
            n=ans[i];
        }
        return nums.size();
    }
};