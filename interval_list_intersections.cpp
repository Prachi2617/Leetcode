//O(n+m) time complexity
//O(1) space

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList)
    {
        int i=0, j=0, n1,n2,l,r;
        vector<vector<int>>ans;
        n1=firstList.size();
        n2=secondList.size();
        while(i<n1 && j<n2)
        {
            l=max(firstList[i][0],secondList[j][0]);
            r=min(firstList[i][1],secondList[j][1]);
            if(l<=r)
            {
                ans.push_back({l,r});
            }
            if(firstList[i][1]<secondList[j][1])
                i++;
            else
                j++;
        }
        return ans;
    }
};
