class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0,zc=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[k++]=nums[i];
            }
            else zc++;
        }
        while(zc!=0){
            nums[k++]=0;
            zc--;
        }
    }
};