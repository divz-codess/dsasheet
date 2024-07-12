class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_cp=INT_MAX;
        int curr_pr=0,max_pr=0;
        
        for(int i=0;i<prices.size();i++){
            min_cp=min(min_cp,prices[i]);
            curr_pr=prices[i]-min_cp;
            max_pr=max(max_pr,curr_pr);
        }
        return max_pr;
        
    }
};