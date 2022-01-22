class Solution {
public:
    bool areAlmostEqual(string s1, string s2)
    {
        map<char,int>mp1;
        map<char,int>mp2;
        int i,j=0;
        if(s1.size()!=s2.size())
            return false;
        else
        {
            for(i=0;i<s1.size();i++)
            {
                if(s1[i]!=s2[i])
                {
                    j++;
                    mp1[s1[i]]++;
                    mp2[s2[i]]++;
                }

                if(j>2)
                    return false;
            }
        }

        for(auto it1=mp1.begin(), it2=mp2.begin();it1!=mp1.end() && it2!=mp2.end();it1++,it2++)
        {
            if(it1->first!=it2->first || it1->second!=it2->second )
                return false;
        }

        return true;
    }
};
