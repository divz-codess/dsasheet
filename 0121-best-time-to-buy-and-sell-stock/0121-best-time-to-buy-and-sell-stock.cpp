class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int minval=INT_MAX;
     int p=0, op=0;
     for(int i=0;i<prices.size();i++){
         if(minval>prices[i]){
             minval=prices[i];
         }
         p=prices[i]-minval;
         if(p>op){
             op=p;
         }
     }
        return op;
    }
};