class MinStack {
public:
    stack<int> s;
    int minimo = 1e6;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        int minimo = 1e6;
        stack<int> tmp = s;
        
        while(!tmp.empty()){
            minimo = min(minimo, tmp.top());
            tmp.pop();
        }

        return minimo;
    }
};
