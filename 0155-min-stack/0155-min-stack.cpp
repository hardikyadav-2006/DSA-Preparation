class MinStack {
    vector<pair<int, int>> v;
public:
    MinStack() {

    }
    
    void push(int val) {
        if(v.empty()) v.push_back({val, val});
        else{ 
            int curr_min = min(v[v.size()-1].second, val);
            
            v.push_back({val, curr_min});
        }
        
    }
    void pop() {
        v.pop_back();
        
    }
    int top() {
        return v[v.size()-1].first;
        
    }
    
    int getMin() {
        return v[v.size() -1].second;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */