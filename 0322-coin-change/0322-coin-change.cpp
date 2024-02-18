class Solution {
public:
    int coinChange(vector<int>& coins, int amt) {
        int n=coins.size();
        vector<vector<int>> t(n+1, vector<int> (amt+1));
        for(int i=0;i<n+1;i++){
            for(int j=0;j<amt+1;j++){
                if(i==0) t[i][j]=INT_MAX-1;
                if(j==0) t[i][j]=0;
            }
        }
        for(int i=1,j=1;j<amt+1;j++){
            if(j%coins[i-1]==0) t[i][j]=(j/coins[i-1]);
            else t[i][j]=INT_MAX-1;
        }
        
        for(int i=2;i<n+1;i++){
            for(int j=1;j<amt+1;j++){
                if(coins[i-1]<=j){
                    t[i][j]=min(1+t[i][j-coins[i-1]], t[i-1][j]);
                }
                else
                    t[i][j]=t[i-1][j];
            }
        }
        if(t[n][amt]>=INT_MAX-1) return -1;
        return t[n][amt];
    }
};