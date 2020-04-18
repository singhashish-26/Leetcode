#https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/530/week-3/3303/

class Solution {
public:
    int fun(vector<vector<int>> &grid, int r, int c)
    {
        int dp[r][c];
        dp[0][0]=grid[0][0];
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(i==0 && j==0)
                    continue;
                if(i==0)
                {
                    dp[i][j]=dp[i][j-1]+grid[i][j];
                    continue;
                }
                if(j==0)
                {
                    dp[i][j]=dp[i-1][j]+grid[i][j];
                    continue;
                }
                else
                {
                    dp[i][j]=grid[i][j]+min(dp[i-1][j],dp[i][j-1]);
                    continue;
                }
                
            }
        }
        return dp[r-1][c-1];
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.size()==0)
        {
            return 0;
        }
        int r=grid.size(), c=grid[0].size();
        return fun(grid, r,c);
    }
};
