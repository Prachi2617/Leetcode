class Solution {
public:
    bool checkIfPangram(string sentence)
    {
        const int maxx=26;
        bool che[maxx]={false};
        map<char,int>mp;
        for(int i=0;i<sentence.size();i++)
        {
            mp[sentence[i]]++;
        }

        int i=0;
       /* for(auto j :mp)
        {
            if(j.first==(97+i))
            {
                i++;
            }
            else
                return false;
        }*/
        if(mp.size()==26)
         return true;
        else
            return false;
    }
};
