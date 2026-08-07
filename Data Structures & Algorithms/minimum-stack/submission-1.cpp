class MinStack {
public:
    stack<long long int> s;
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
        long long int minimo = 2e31 -1;
        stack<long long int> tmp = s;
        
        while(!tmp.empty()){
            minimo = min(minimo, tmp.top());
            tmp.pop();
        }

        return minimo;
    }
};
