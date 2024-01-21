class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int k=1;
        
        sort(nums.begin(),nums.end());
        int mx=nums[0];
        for(int i=1;i<nums.size();i++){
            mx=max(mx, nums[i]);
            if(nums[i]!=nums[i-1]){
                nums[k++]=nums[i];
            }
        }
        if((k-2-1)>=0) return nums[k-2-1];
        else return mx;
    }
};