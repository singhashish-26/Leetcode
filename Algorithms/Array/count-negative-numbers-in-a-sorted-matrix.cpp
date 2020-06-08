#https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

class Solution {
public:
    void count(vector<int>& g, int &c)
    {
        int l=0,h=g.size()-1,mid;
        while(l<h)
        {
            mid=(l+h)/2;
            if(g[mid]>=0)
            {
                l=mid+1;
                if(l<g.size() && g[l]<0)
                {
                    c+=g.size()-l;
                    return;
                }
            }
            else
            {
                h=mid-1;
                if(h>=0 && g[h]>=0)
                {
                    c+=g.size()-h-1;
                    return;
                }
            }
        }
        if(l==h && g[h]<0)
                c+=g.size()-h;
            if(h==-1)
                c+=g.size();
    }
    
    int countNegatives(vector<vector<int>>& grid) {
        int c=0;
        for(int i=0; i<grid.size(); i++)
        {
            count(grid[i],c);
        }
        return c;
    }
};
