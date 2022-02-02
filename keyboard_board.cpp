class Solution {
public:
    vector<string> findWords(vector<string>& words)
    {
        map<char,int>mp;
        string st1="qwertyuiop";
        string st2="asdfghjkl";
        string st3="zxcvbnm";
        int n1,n2,n3,i;
        n1=st1.size();
        n2=st2.size();
        n3=st3.size();
        for(i=0;i<n1;i++)
        {
            mp[st1[i]]=1;
        }
         for(i=0;i<n2;i++)
        {
            mp[st2[i]]=2;
        }
         for(i=0;i<n2;i++)
        {
            mp[st3[i]]=3;
        }
        vector<string>ans;
        for(i=0;i<words.size();i++)
        {
            int flag=0;
            for(int j=0;j<words[i].size()-1;j++)
            {
                char c=words[i][j] ;
                char c1=words[i][j+1] ;
                if(isupper(c))
                     c=tolower(c);
                if(isupper(c1))
                    c1=tolower(c1);
                if(mp[c]!=mp[c1])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                ans.push_back(words[i]);
        }
        return ans;
    }
};
