#https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/531/week-4/3312/

class Solution {
public:
    int fun(vector<vector<char>>& m, int r, int c)
    {
        int dp[r][c],mx=0;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j]=m[i][j]-'0';
                    mx = max(mx,dp[i][j]);
                    continue;
                }
                if(m[i][j]=='1')
                {
                    dp[i][j]=1+min(min(dp[i-1][j-1],dp[i-1][j]),dp[i][j-1]);
                    mx= max(mx, dp[i][j]);
                }
                else
                    dp[i][j]=0; 
            }
        }
        return (mx*mx);
    }
    
    int maximalSquare(vector<vector<char>>& matrix) {
        int r= matrix.size();
        if(r==0)
            return 0;
        int c= matrix[0].size();
        
        return fun(matrix,r,c);
    }
};
