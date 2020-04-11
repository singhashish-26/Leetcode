#https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3292/

class MinStack {
public:
    /** initialize your data structure here. */
    stack<long long int> s;
    long long int mn;
    MinStack() {
        mn = LLONG_MIN;
    }
    
    void push(int x) {
        if(s.empty())
        {
            mn =x;
            s.push(x);
        }
        else
        {
            if(x<mn)
            {
                //cout<<x<<" ";
                long long int y =x;
                s.push(2*y-mn);
                mn=y;
                //cout<<mn;
            }
            else
                s.push(x);
        }
    }
    
    void pop() {
        if(s.top()>=mn)
        {
            s.pop();
        }
        else
        {
            mn= (2*mn)-s.top();
            s.pop();
        }
    }
    
    int top() {
        long long int yy= s.top();
        if(yy<mn)
        {
            yy = mn;
        }
        return yy;
        
    }
    
    int getMin() {
        return mn;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
