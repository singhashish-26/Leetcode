#https://leetcode.com/problems/implement-stack-using-queues/

class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int>q;
    int size;
    MyStack() {
        size=0;
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        if(q.empty())
        {
            q.push(x);
            size++;
        }
        else
        {
            q.push(x);
            size++;
            while(q.front()!=x)
            {
                int t= q.front();
                q.pop();
                q.push(t);
            }
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int t = q.front();
        q.pop();
        size--;
        return t;
    }
    
    /** Get the top element. */
    int top() {
        return q.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(size==0)
            return 1;
        else
            return 0;
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
