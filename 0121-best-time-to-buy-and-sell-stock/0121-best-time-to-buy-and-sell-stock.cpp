class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minval=INT_MAX;
        int pt=0;
        int p=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minval){
                minval=prices[i];
            }
            pt=prices[i]-minval;
            if(pt>p){
                p=pt;
            }
        }
        return p;
    }
};