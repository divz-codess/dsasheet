class StockSpanner {
public:
   /* 100 1
    80 1
    60 1
    70 2
    60 1
    75 4
    85 6*/
    stack<pair<int,int>> s;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span=1;
        while(!s.empty() && s.top().first<=price){
            span+=s.top().second;
            s.pop();
        }
        s.push({price,span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */