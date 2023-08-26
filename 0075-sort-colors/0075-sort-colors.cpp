class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n0=0,n1=0,n2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                n0++;
            }
            else if(nums[i]==1){
                n1++;
            }
            else if(nums[i]==2){
                n2++;
            }
        }
        nums.clear();
        nums.insert(nums.begin(),n0,0);
        nums.insert(nums.begin()+n0,n1,1);
        nums.insert(nums.begin()+n0+n1,n2,2);
    }
};