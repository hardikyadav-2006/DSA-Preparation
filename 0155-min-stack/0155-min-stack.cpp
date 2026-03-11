class MinStack {
    vector<pair<int, int>> vec;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(vec.empty()) vec.push_back({val, val});
        else {
            int min_val = min(vec[vec.size()-1].second, val);
            vec.push_back({val, min_val});
        }

        
    }
    
    void pop() {
        vec.pop_back();
    }
    
    int top() {
        return vec[vec.size()-1].first;
    }
    
    int getMin() {
        return vec[vec.size()-1].second;
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