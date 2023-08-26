class Solution {
public:
    /*
    ALGO:
    1. Take a minval variable and initialize it to INT_MAX.
    2. Now keep finding the minimum price at which we can sell
    3. Also keep finding profit if we sell it today
    4. And store maximum profit thst can be generated at all times by storing it in overallpr variable
    */
    int maxProfit(vector<int>& prices) {
        int leastvalue=INT_MAX;
        int pr=0;
        int ovpr=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<leastvalue){
                leastvalue=prices[i];
            }
            pr=prices[i]-leastvalue;
            if(ovpr<pr){
                ovpr=pr;
            }
        }
        return ovpr;
    }
};