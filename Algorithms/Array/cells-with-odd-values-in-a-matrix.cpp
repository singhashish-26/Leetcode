#https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/

class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int row[50]={0};
        int col[50]={0};
        for(int i=0; i<indices.size(); i++)
        {
            row[indices[i][0]]++;
            col[indices[i][1]]++;
        }
        int e=0,o=0;
        for(int i=0; i<m; i++)
        {
            col[i]%2==0?e++:o++;
        }
        int c=0;
        for(int i=0; i<n; i++)
        {
            c+=(row[i]%2==0)?o:e;
        }
        return c;
    }
};
