class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int>st1;
    stack<int>st2;
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x)
    {
       while(!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop()
    {
        if(st1.empty())
            return 0;
        int x=st1.top();
        st1.pop();
        return x;
    }

    /** Get the front element. */
    int peek()
    {
        if(st1.empty())
            return 0;
        return st1.top();
    }

    /** Returns whether the queue is empty. */
    bool empty()
    {
        return st1.empty();
    }
};
