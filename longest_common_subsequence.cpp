class Solution {
public:
    int longestCommonSubsequence(string text1, string text2)
    {
        int n = text1.size();
        int m = text2.size();
        int i,j;
        //int ans = func(text1, text2,n1, n2 )
        int dp[n+1][m+1];
        for(i=0;i<m+1;i++)
            dp[0][i]=0;
        for(i=0;i<n+1;i++)
            dp[i][0]=0;
        for(i=1;i<n+1;i++)
        {
            for(j=1;j<m+1;j++)
            {
                if(text1[i-1]==text2[j-1])
                    dp[i][j]= 1+ dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
};
