#https://leetcode.com/problems/flipping-an-image/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i=0; i<A.size(); i++)
        {
            reverse(begin(A[i]),end(A[i]));
            for(int j=0; j<A[i].size(); j++)
            {
                A[i][j]^=1;
            }
        }
        return A;
    }
};
