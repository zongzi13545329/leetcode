class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> stack1;
    stack<int> stack2;
    int x;
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        return stack1.push(x);

    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(stack1.empty()&&stack2.empty()){
            return false;
        }
        else if (!stack2.empty()){
            x = stack2.top();
            stack2.pop();
            return x;
        }
        else {
            while(!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
            }
            x = stack2.top();
            stack2.pop();
            return x;
        }
    }
    
    /** Get the front element. */
    int peek() {
        if(stack1.empty()&&stack2.empty()){
            return false;
        }
        else if (!stack2.empty()){
            return stack2.top();;
        }
        else {
            while(!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
            }
            return stack2.top();;
        }

    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return (stack1.empty()&&stack2.empty());

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