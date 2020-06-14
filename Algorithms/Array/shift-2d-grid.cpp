#https://leetcode.com/problems/shift-2d-grid/

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> temp;
        for(auto x:grid)
            for(auto y:x)
                temp.push_back(y);
        int n= temp.size();
        k= k%n;
        vector<vector<int>> ans;
        vector<int> v(grid[0].size());
        int j=0,c=0;
        for(int i=n-k; i<n; i++)
        {
            if(j==v.size())
            {
                ans.push_back(v);
                //c++;
                j=0;
                v[j++]=temp[i];
            }
            else
            {
                v[j++]=temp[i];
            }
        }
        for(int i=0; i<n-k; i++)
        {
            if(j==v.size())
            {
                ans.push_back(v);
                //c++;
                j=0;
                v[j++]=temp[i];
            }
            else
            {
                v[j++]=temp[i];
            }
        }
        ans.push_back(v);
        return ans;
    }
};
