class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int>q1;
    queue<int>q2;
   int curr;
    MyStack() {
        curr=0;
    }

    /** Push element x onto stack. */
    void push(int x)
    {

        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int>q=q1;
        q1=q2;
        q2=q;
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop()
    {

        if(q1.empty())
            return 0;
        int x=q1.front();
        q1.pop();
        return x;
    }

    /** Get the top element. */
    int top()
    {
        if(q1.empty())
            return 0;
        return q1.front();
    }

    /** Returns whether the stack is empty. */
    bool empty()
    {
        return q1.empty();
    }
};
