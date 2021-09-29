//Time Complexity- O(n)
//Space Complexity- O(n)

string minRemoveToMakeValid(string s)
    {
        stack<int>st;
        int i,n;
        n=s.size();
        for(i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else if(s[i]==')')
            {
                if(!st.empty() )
                {
                    st.pop();
                }
                else
                    s[i]='*';
            }

        }
        while(!st.empty())
        {
            s[st.top()]='*';
            st.pop();
        }
        s.erase(remove(s.begin(), s.end(), '*'), s.end());
        return s;
    }
