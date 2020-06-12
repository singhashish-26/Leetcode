#https://leetcode.com/problems/toeplitz-matrix/

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        vector<int> v(matrix[0].size()),t1,t2;
        v=matrix[0];
        int flag=1;
        for(int i=1; i<matrix.size(); i++)
        {
            copy(v.begin(), v.end()-1, back_inserter(t1));
            copy(matrix[i].begin()+1, matrix[i].end(), back_inserter(t2));
            if(t1==t2)
            {
                v=matrix[i];
            }
            else
            {
                flag=0;
                break;
            }
        }
        return flag;
    }
};
