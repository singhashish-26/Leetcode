#https://leetcode.com/problems/island-perimeter/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int s=0,c=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[i].size(); j++)
            {
                if(grid[i][j]==1)
                {
                    s++;
                
                if(i!=0 && grid[i-1][j]==1)
                    c++;
                if(j!=grid[i].size()-1 && grid[i][j+1]==1)
                    c++;
                }
            }
        }
        return 4*s-2*c;
    }
};
