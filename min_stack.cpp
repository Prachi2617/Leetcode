//approach 1: using two vector
class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> st;
    vector<int> it;
   
    MinStack() {
       
    }
   
    void push(int val) {
        st.push_back(val);
        if(it.empty() || val<=it.back())
            it.push_back(val);
    }
   
    void pop()
    {
        if(it.back()==st.back())
            it.pop_back();
        st.pop_back();
    }
   
    int top() {
        //it=st.begin()+st.size()-1;
        //return *it;
        return st.back();
    }
   
    int getMin()
    {
        int id=it.back();
        return id;
    }
};

//approach 2: using two stack

class MinStack {
public:
    /** initialize your data structure here. */
    stack<int>s1;
    stack<int>s2;
    MinStack() {

    }

    void push(int val)
    {
        s1.push(val);
        if(s2.empty()||val<=s2.top())
            s2.push(val);
    }

    void pop()
    {
        if(s1.top()==s2.top())
            s2.pop();
        s1.pop();
    }

    int top()
    {
        return s1.top();
    }

    int getMin()
    {
        return s2.top();
    }
};
