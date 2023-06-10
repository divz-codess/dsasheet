class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int j=i;
            int s=0;
            while(j>=0){
                s+=nums[j];
                j--;
            }
            ans.push_back(s);
        }
        return ans;
    }
};