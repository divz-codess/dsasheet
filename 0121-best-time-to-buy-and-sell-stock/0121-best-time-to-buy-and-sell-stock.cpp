class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_cp=INT_MAX;
        int curr_pr=0, max_pr=0;
        
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min_cp){
                min_cp=prices[i];
            }
            curr_pr=prices[i]-min_cp;
            if(max_pr<curr_pr){     // if I donot initialize max_pr and curr_pr how will I compare
                // them in the first instance
                max_pr=curr_pr;
            }
        }
        return max_pr;
    }
};