class Solution {
public:
    string removeDuplicates(string s)
    {
        string ans;
        for(int i=0;i<s.length();i++)
        {
            if(ans.size()==0)
            {
                ans.push_back(s[i]);
            }

            else if(s[i]==ans.back())
            {
                ans.pop_back();
            }
            else
                ans.push_back(s[i]);
        }
        return ans;
        /*stack<char>st;
        string fin="";
        for(int i=0;i<s.length();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(st.top()==s[i])
            {
                st.pop();
            }
            else
                st.push(s[i]);
        }
        while(!st.empty())
        {
            fin=st.top()+fin;
            st.pop();
        }

        return fin;*/
       /* int i,n;

        for(i=1;i<s.length()-1;i++)
        {
            while(s.length()&&i>=0 &&i<s.length() && s[i]==s[i+1] )
            {
                s.erase(i,2);
                if(!s.length())
                    return "";
            }
            while(i>0 && s.length() && s[i]==s[i-1] )
            {
                s.erase(i-1,2);
                i--;
                if(!s.length())
                    return "";
            }
        }
        return s;*/
    }
};
