class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size(),n=board[0].size();
        vector<pair<int,int>> direction={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
        vector<pair<int,int>> toOne,toZero;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int count=0;
                for(int k=0;k<8;k++)
                {
                    int row=i+direction[k].first;
                    int col=j+direction[k].second;
                    if(row>=0 && col>=0 && row<m && col<n && board[row][col]==1)count++;
                }
                if(board[i][j]==1)
                {
                    if(count<2 || count>3)toZero.push_back({i,j});
                }
                else
                {
                    if(count==3)toOne.push_back({i,j});
                }
            }
        }
        for(auto it:toZero)
        board[it.first][it.second]=0;
        for(auto it:toOne)
        board[it.first][it.second]=1;
        
    }
};
