class StockSpanner {
    stack<pair<int, int>> s;
public:
    StockSpanner() {
        stack<pair<int, int>> s;
        
    }
    
    int next(int price) {
        
        int span = 0;
        while(!s.empty() && s.top().first <= price){
            span += s.top().second ;
            s.pop();
        }
        
        s.push({price, span+1});
        return span+1;
            
            
    }
        

};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */