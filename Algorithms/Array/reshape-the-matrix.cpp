#https://leetcode.com/problems/reshape-the-matrix/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int x = nums.size();
        int y = nums[0].size();
        if(x*y != r*c)
        {
            return nums;
        }
        vector<vector<int>> mat(r, vector<int>(c));
        int c_r=0, c_c=0;
        for(int i=0; i<x; i++)
        {
            for(int j=0; j<y; j++)
            {
                if(c_c==c)
                {
                    c_c=0;
                    c_r++;
                }
                mat[c_r][c_c]=nums[i][j];
                c_c++;
            }
        }
        return mat;
    }
};
