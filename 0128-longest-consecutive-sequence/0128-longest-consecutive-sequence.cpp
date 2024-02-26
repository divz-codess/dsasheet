class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi=0;
        int cnt=1;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            if(i< n-1 && nums[i]==nums[i+1]){
                continue;
            }
            else if(i< n-1 && nums[i]+1==nums[i+1]){
                cnt++;
            }
            else{
                maxi=max(maxi,cnt);
                cnt=1;
            }
        }
        return maxi;
    }
};