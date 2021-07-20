class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int i, mn,mx;
        mn=INT_MAX;
        mx=0;
        for(i=0;i<prices.size();i++)
        {
            if(prices[i]<mn)
                mn=prices[i];
            else if((prices[i]-mn)>mx)
                mx=prices[i]-mn;
        }
        return mx;
    }
};
