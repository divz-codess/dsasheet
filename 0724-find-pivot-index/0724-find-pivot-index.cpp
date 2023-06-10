class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int s=0, ls=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            s=s-nums[i];
            if(s==ls) return i;
            ls=ls+nums[i];
        }
        return -1;
    }
};