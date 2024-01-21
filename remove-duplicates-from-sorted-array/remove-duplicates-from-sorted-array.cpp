class Solution {
public:
    // 1 1 2
    int removeDuplicates(vector<int>& nums) {
        int k=1,i;
        
        for(i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1])
                nums[k++]=nums[i];
        }
        
        
        return k;
    }
};