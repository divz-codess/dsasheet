class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        int x=0;
        vector<int> numb;
        for(int i: nums){
            if(i==0) x++;
            else numb.push_back(i);
        }
        
        nums.clear();
        nums.insert(nums.end(),x,0);
        nums.insert(nums.begin(),numb.begin(),numb.end());
        return nums;
        
    }
};