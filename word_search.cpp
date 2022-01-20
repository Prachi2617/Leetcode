class Solution {
public:
    bool dfs(int i, int j,string &word,vector<vector<char>>&board,int index,int r,int c)
    {
        if(i<0 || j<0 || i>=r || j>=c)
            return false;
        if(board[i][j]!=word[index] )
           return false;

        if(index==word.size()-1)
            return true;

        char ch=board[i][j];
        board[i][j]='*';

       bool ret= (dfs(i+1,j,word,board,index+1,r,c) || dfs(i-1,j,word,board,index+1,r,c)|| dfs(i,j+1,word,board,index+1,r,c) || dfs(i,j-1,word,board,index+1,r,c));
        board[i][j]=ch;
        return ret;

    }
    bool exist(vector<vector<char>>& board, string word)
    {
        int i, j,col,row;
        col=board[0].size();
        row=board.size();

        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(board[i][j]==word[0])
                     if(dfs(i,j,word,board,0,row,col))
                     return true;

            }
        }
        return false;
    }
};
