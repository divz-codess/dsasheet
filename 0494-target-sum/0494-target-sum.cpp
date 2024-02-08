class Solution {
public:

    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        target=abs(target);
        int sum=0;
        for(int i:nums) sum+=i;
    
        if(sum<target|| (sum+target)%2!=0) return 0;
        int sum1=(sum+target)/2;
        
        
        vector<vector<int>> t(n+1,vector<int>(sum1+1,0));
        
        for(int i=0;i<n+1;i++){
            t[i][0]=1;
        }
        for(int i=1;i<n+1;i++){
            for(int j=0;j<sum1+1;j++){
                if(nums[i-1]<=j){
                    t[i][j]=t[i-1][j]+t[i-1][j-nums[i-1]];
                }
                else
                    t[i][j]=t[i-1][j];
            }
        }
        
        return t[n][sum1];
    }
};