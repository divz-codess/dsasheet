class MinStack {
public:
    MinStack() {
        
    }
    stack<int> s;
    stack<int> ss;
    
    void push(int val) {
        if(s.size()==0){
            s.push(val);
            ss.push(val);
        }
        else if(val<=ss.top()){
            s.push(val);
            ss.push(val);
        }
        else if(val>ss.top()){
            s.push(val);
        }
            
    }
    
    void pop() {
        int ans=s.top();
        s.pop();
        if(ans==ss.top()){
            ss.pop();
        }
    }
    
    int top() {
       // if(s.size()==0) return -1;
        return s.top();
    }
    
    int getMin() {
        //if(s.size()==0) return -1;
        return ss.top();
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