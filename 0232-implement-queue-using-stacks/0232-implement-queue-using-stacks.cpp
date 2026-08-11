class MyQueue {
public:
   stack<int> s1;
   stack<int> s2;
   int size=0;
    
    MyQueue() {
        
    }
    
    void push(int x) {
     while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
     }
     s1.push(x);
     while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
     }
     size++;

    }
    
    int pop() {
        int num=s1.top();
        s1.pop();
        size--;
        return num;
        
    }
    
    int peek() {
        return s1.top();
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