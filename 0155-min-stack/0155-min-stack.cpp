class MinStack {
    stack<int> s;
    long long int minVal = INT_MAX;
public:
    MinStack() {

    }
    
    void push(int val) {
        if(s.empty()) {
            s.push(val);
            minVal = val;
        }
        else{ 
            if(val<minVal){
                s.push(val*2 - minVal);
                minVal = min(minVal, val);
            }
            
            
        }
        
    }
    void pop() {
        s.pop();
        minVal = 2*minVal - s.top();
        
    }
    int top() {
        return 2*minVal - s.top();
        
    }
    
    int getMin() {
        return minVal;
        
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