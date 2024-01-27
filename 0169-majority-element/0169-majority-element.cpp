class Solution {
public:
    
    
    // ***** MOORE VOTING ALGORITHM *****
    
    
    int majorityElement(vector<int>& nums) {
        int majorityIndex=0;
        int count=1;
        for(int i=1;i<nums.size();i++){
            nums[majorityIndex]==nums[i]?count++:count--;
            if(count==0){
                majorityIndex=i;
                count=1;
            }
        }
        
        return nums[majorityIndex];
    }
};