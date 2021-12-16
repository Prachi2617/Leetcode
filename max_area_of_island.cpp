class Solution {
public:

    int dfs(int i, int j,vector<vector<int>>&grid,int r,int c)
    {
        if(i<0 || j<0 || i>=r || j>=c)
            return 0;
        if(grid[i][j]==0)
            return 0;
        if(grid[i][j]==1)
        {
           // cnt++;
            grid[i][j]=0;
            int x=dfs(i,j+1,grid,r,c);
            int y=dfs(i,j-1,grid,r,c);
            int z=dfs(i+1,j,grid,r,c);
            int q=dfs(i-1,j,grid,r,c);
            return 1+x+y+z+q;

        }
        return 0;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid)
    {
        int i,j,r,c;
        r=grid.size();
        c=grid[0].size();
       int f_ans=0;
       int cnt=-1;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                //cnt=0;
                if(grid[i][j]==1)
                {
                    f_ans=max(f_ans,dfs(i,j,grid,r,c));

                }
            }
        }
        return f_ans;;

    }
};
