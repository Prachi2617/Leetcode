class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score)
    {
        priority_queue<int>q;
        for(int i=0;i<score.size();i++)
        {
            q.push(score[i]);
        }
        vector<string>ans;
        map<int, string, greater<int>>mp;
        int j=1;
        char x=4;
        while(!q.empty())
        {
            if(j==1)
                mp[q.top()]="Gold Medal";
            else if(j==2)
                mp[q.top()]="Silver Medal";
            else if(j==3)
                mp[q.top()]="Bronze Medal";
            else
                mp[q.top()]=to_string(j);


            j++;
            q.pop();
        }
        for(int i=0;i<score.size();i++)
        {
           ans.push_back(mp[score[i]]);
        }
        return ans;
    }
};
