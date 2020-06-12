#https://leetcode.com/problems/available-captures-for-rook/

class Solution {
public:
    int count(vector<vector<char>>& b, int x, int y, int dirx, int diry)
    {
        while(x>=0 && x<b.size() && y>=0 && y<b[0].size() && b[x][y]!='B')
        {
            if(b[x][y]=='p')
                return 1;
            x+=dirx;
            y+=diry;
        }
        return 0;
    }
    
    int numRookCaptures(vector<vector<char>>& board) {
        for(int i=0; i<board.size(); i++)
            for(int j=0; j<board[i].size(); j++)
            {
                if(board[i][j]=='R')
                {
                    return count(board,i,j,1,0)+count(board,i,j,-1,0)+count(board,i,j,0,1)+count(board,i,j,0,-1);
                }
            }
        return 0;
    }
};
