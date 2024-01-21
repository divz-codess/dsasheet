class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> odd;
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                swap(nums[k++],nums[i]);
            }
            // else odd.push_back(nums[i]);
        }
        // for(int i=0;i<odd.size();i++){
        //     nums[k++]=odd[i];
        // }
        return nums;
    }
};