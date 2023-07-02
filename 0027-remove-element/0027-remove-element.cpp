class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> nums2=nums;
        nums.clear();
        int k=0;
        for(int i=0;i<nums2.size();i++){
            if(nums2[i]!=val){
                nums.push_back(nums2[i]);
                k++;
            }
        }
        return k;
    }
};