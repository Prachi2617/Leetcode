class Solution {
public:
    int dp[301][5001];
    int solve(vector<int>coins,int m,int n)
    {
        if(m==-1 && n>0)
            return 0;
        if(n==0)
            return 1;
        if(n<0)
            return 0;
        if((dp[m][n])!=(-1))
            return dp[m][n];
        return dp[m][n]=solve(coins,m,n-coins[m]) + solve(coins,m-1,n);
    }
    int change(int amount, vector<int>& coins)
    {
        int m=coins.size();
        dp[m][amount+1];
        int i, j;
        for(i=0;i<m;i++)
        {
            for(j=0;j<=amount;j++)
                dp[i][j]=-1;
        }
        return solve(coins,m-1,amount);
    }
};
