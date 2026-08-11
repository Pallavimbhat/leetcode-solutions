class MyQueue {
public:
   stack<int> s1;
   stack<int>s2;
   int size=0;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
        size++;
    }
    
    int pop() {
      int num;
        if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        }
        num=s2.top();
         s2.pop();
         size--;

        return num;
    }
    
    int peek() {
        int num;
        if(s2.empty()){
        
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        }
        num=s2.top();
        return num;
    }
    
    bool empty() {
        if(size==0) return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */