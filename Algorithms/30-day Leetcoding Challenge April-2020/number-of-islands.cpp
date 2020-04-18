https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/530/week-3/3302/

class Solution {
public:
    void mark(vector<vector<char>>& grid, vector<vector<int>> &visited, int row, int col)
    {
        visited[row][col]=1;
        for(int i=col+1; i<grid[0].size(); i++)
        {
            if(grid[row][i]=='0')
            {
                break;
            }
            else
            {
                if(visited[row][i])
                    break;
                mark(grid,visited, row, i);
            }
        }
        for(int i=col-1; i>=0; i--)
        {
            if(grid[row][i]=='0')
            {
                break;
            }
            else
            {
                if(visited[row][i])
                    break;
                mark(grid,visited, row, i);
            }
        }
        for(int i=row+1; i<grid.size(); i++)
        {
            if(grid[i][col]=='0')
            {
                break;
            }
            else
            {
                if(visited[i][col])
                    break;
                mark(grid,visited, i, col);
            }
        }
        for(int i=row-1; i>=0; i--)
        {
            if(grid[i][col]=='0')
            {
                break;
            }
            else
            {
                if(visited[i][col])
                    break;
                mark(grid,visited, i, col);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0)
        {
            return 0;
        }
        int r=grid.size(), c= grid[0].size();
        vector<vector<int>> visited(r , vector<int> (c, 0));
        //memset(visited,0,sizeof(visited));
        int count=0;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(grid[i][j]=='1' && visited[i][j]==0)
                {
                    mark(grid,visited,i,j);
                    ++count;
                }
            }
        }
        return count;
    }
};
