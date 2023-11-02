class MinStack {
public:
    MinStack() {
        
    }
    stack<int> s;
    stack<int> ms;
    
    void push(int val) {
        if(s.size()==0){
            s.push(val);
            ms.push(val);
        }
        else if(val<=ms.top()){
            ms.push(val);
            s.push(val);
        }
        else if(val>ms.top()){
            s.push(val);
        }
    }
    
    void pop() {
        if(ms.top()==s.top()){
            ms.pop();
            s.pop();
        }
        else s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return ms.top();
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