class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     int ls=0, s=0;
    for(int i=0;i<nums.size();i++){
        s+=nums[i];
    }
        for(int i=0;i<nums.size();i++){
            s-=nums[i];
            if(ls==s) return i;
            ls+=nums[i];
        }
        return -1;
        //TC= O(n)
        //SC= O(1)
    }
};