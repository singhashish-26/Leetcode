#https://leetcode.com/explore/challenge/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3383/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int c=0,r=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[i].size(); j++)
            {
                if(grid[i][j]==1){
                    c++;
                if(j!=0 &&  grid[i][j-1]==1)
                    r++;
                if(i!=0 && grid[i-1][j]==1)
                    r++;
                }
            }
        }
        return 4*c-2*r;
    }
};
