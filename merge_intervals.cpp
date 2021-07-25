//compare second element of each element with the first element of its nxt element if greater then update the 2nd element
//complexity-O(nlogn)+O(n)- sort + for loop
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals)
    {
        if(intervals.size()<=1)
            return intervals;
        int i;
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        int n=intervals.size();
        for( i=0;i<(n-1);i++)
        {
            //if(i==n-1)
            //    ans.push_back(intervals[i]);
         if(intervals[i][1]>=intervals[i+1][0])
            {
                intervals[i+1][0]=intervals[i][0];
                intervals[i+1][1]=max(intervals[i+1][1],intervals[i][1]);
            }
            else
                ans.push_back(intervals[i]);
        }
        ans.push_back(intervals[i]);
        return ans;
    }
};
