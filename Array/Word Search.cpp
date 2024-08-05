class Solution {
public:
    bool dfs(vector<vector<char>> &board,string &word,int i,int j,int k)
    {
        if(k==word.size())return true;

        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]!=word[k])return false;
        char temp=board[i][j];
        board[i][j]='*';

        vector<pair<int,int>> next{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        for(auto n:next)
        {
            int newrow=i+n.first;
            int newcol=j+n.second;
            if(dfs(board,word,newrow,newcol,k+1))return true;
        }
        board[i][j]=temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(dfs(board,word,i,j,0))
                return true;
            }
        }
        return false;    
    }
};
