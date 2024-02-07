class Solution {
public:
    bool subsetsum(vector<int> &nums, long long int sum, vector<vector<bool>> &t){
        for(int i=0;i<nums.size()+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0){
                    t[i][j]=false;
                }
                if(j==0){
                    t[i][j]=true;
                }
            }
        }
        for(int i=1;i<nums.size()+1;i++){
            for(int j=1;j<sum+1;j++){
                if(nums[i-1]<=j){
                    t[i][j]=(t[i-1][j-nums[i-1]])||(t[i-1][j]);
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[nums.size()][sum];
    }
    
    bool canPartition(vector<int>& nums) {
        long long sum=0;
        for(int i:nums){
            sum+=i;
        }
        if(sum%2!=0) return false;
        else{
            vector<vector<bool>> t(nums.size()+1,vector<bool>(sum/2+1));
            return subsetsum(nums,sum/2,t);
        }
    }
};