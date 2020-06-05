#https://leetcode.com/problems/image-smoother/

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int row = M.size();
        int col = M[0].size();
        vector<vector<int>> ans(row, vector<int>(col,0));
        for(int r=0; r<row; r++)
        {
            for(int c=0; c<col; c++)
            {
                int count=0;
                for(int x=r-1; x<=r+1; x++)
                {
                    for(int y=c-1; y<=c+1; y++)
                    {
                        if(x>=0 && x<row && y>=0 && y<col)
                        {
                            count++;
                            ans[r][c]+=M[x][y];
                        }
                    }
                }
                ans[r][c]/=count;
            }
        }
        return ans;
    }
};
