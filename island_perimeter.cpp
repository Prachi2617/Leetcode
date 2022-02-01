class Solution {
public:
    int ans=0;
    void dfs(vector<vector<int>>& grid,int i,int j,int r,int c)
    {
        if(i<0 || i>=r || j<0 ||j>=c)
        {
            ans++;
            return ;
        }
        if(grid[i][j]==0)
        {
            ans++;
            return ;
        }
         if(grid[i][j]==-1)
        {
            return ;
        }
        int x=grid[i][j];
        grid[i][j]=-1;
        dfs(grid,i+1,j,r,c);
        dfs(grid,i,j+1,r,c);
        dfs(grid,i-1,j,r,c);
        dfs(grid,i,j-1,r,c);


    }

    int islandPerimeter(vector<vector<int>>& grid)
    {
        int i,j,r,c;
        r=grid.size();
        c=grid[0].size();
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(grid[i][j])
                {
                    dfs(grid,i,j,r,c);
                    break;
                }
            }
        }
        return ans;
    }
};
