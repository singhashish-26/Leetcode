#https://leetcode.com/problems/transpose-matrix/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> ans(A[0].size(), vector<int>(A.size()));
        int i, j; 
        for (i = 0; i < A.size(); i++) 
            for (j = 0; j <A[0].size() ; j++) 
            ans[j][i] = A[i][j];
        return ans;
    }
};
