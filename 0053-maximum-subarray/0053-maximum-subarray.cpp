class Solution {
public:
/*
KADANE'S ALGO: 
1. Traverse through the array and keep finding currsum
2. We find the currsum by finding maximum of either only using the current no. or by adding the sum of the previous numbers too.
3. If our value is incrementing add it else no
4. Also we keep updating value of max sum if we find any value larger than max sum, this is done instead of storing maxsum for each number in the array and later on finding the largest of them.

*/
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        int currsum=0;
        for(int i=0;i<nums.size();i++){
            currsum=max(nums[i]+currsum,nums[i]);
            maxsum=max(maxsum,currsum);
        }
        return maxsum;
    }
};