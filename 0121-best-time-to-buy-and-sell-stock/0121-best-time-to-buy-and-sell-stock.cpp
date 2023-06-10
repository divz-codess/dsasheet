class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minival=INT_MAX;
        int p=0;
        int op=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minival){
                minival=prices[i];
            }
            p=prices[i]-minival;
            if(p>op){
                op=p;
            }
        }
        return op;
    }
};