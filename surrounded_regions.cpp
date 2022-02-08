class Solution {
public:
    void dfs(int i, int j,vector<vector<char>>&grid,int r,int c)
    {
        if(i<0 || j<0 || i>=r || j>=c)
            return ;

        if(grid[i][j]=='X' || grid[i][j]=='#')
            return ;
        if(grid[i][j]=='O')
        {
            grid[i][j]='#';
            dfs(i,j+1,grid,r,c);
            dfs(i,j-1,grid,r,c);
            dfs(i+1,j,grid,r,c);
            dfs(i-1,j,grid,r,c);
        }
    }
    void solve(vector<vector<char>>& board)
    {
        int i,j,r,c;
        r=board.size();
        c=board[0].size();
        int ans=0;

        for(i=0;i<c;i++)
        {
            if(board[0][i]=='O')
                dfs(0,i,board,r,c);
            if(board[r-1][i]=='O')
                dfs(r-1,i,board,r,c);
        }
        for(i=0;i<r;i++)
        {
            if(board[i][0]=='O')
                dfs(i,0,board,r,c);
            if(board[i][c-1]=='O')
                dfs(i,c-1,board,r,c);
        }


        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(board[i][j]=='O')
                {
                    board[i][j]='X';
                }
                if(board[i][j]=='#')
                        board[i][j]='O';
            }
        }
    }
};
