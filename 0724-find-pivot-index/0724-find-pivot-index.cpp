class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ls,rs;
        for(int i=0;i<nums.size();i++){
            ls=0;
            rs=0;
            if(i+1>=nums.size()){
                rs=0;
            }
            else{
            for(int j=i+1;j<nums.size();j++){
                rs=rs+nums[j];
            }}
            if(i-1<0){
                ls=0;
            }
            else{
            for(int k=i-1;k>=0;k--){
                ls+=nums[k];
            }}
            if(ls==rs)
                return i;
        }
        return -1;
    }
};