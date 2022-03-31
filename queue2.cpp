class MyQueue {
private:
    stack<int> inp;
    stack<int> out;
    
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        inp.push(x);
    }
    
    int pop() {
        if(out.size() != 0){
            int x = out.top();
            out.pop();
            return x;
        }
        else{
            while(!inp.empty()){
                out.push(inp.top());
                inp.pop();
            }
            int x = out.top();
            out.pop();
            return x;
        }
    }
    
    int peek() {
        if(out.size() != 0){
            return out.top();
        }
        else{
            while(!inp.empty()){
                out.push(inp.top());
                inp.pop();
            }
            return out.top();
        }
    }
    
    bool empty() {
        return (inp.size() == 0 && out.size() == 0);
    }
};
