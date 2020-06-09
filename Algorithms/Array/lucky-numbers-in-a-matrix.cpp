#https://leetcode.com/problems/lucky-numbers-in-a-matrix/

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        set<int>row;
        int mn=INT_MAX, mx=-1;
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[i].size(); j++)
            {
                mn = min(mn, matrix[i][j]);
            }
            row.insert({mn});
            mn= INT_MAX;
        }
        vector<int>ans;
        for(int i=0; i<matrix[0].size(); i++)
        {
            for(int j=0; j<matrix.size(); j++)
            {
                mx= max(mx,matrix[j][i]);
            }
            if(row.find(mx)!=row.end())
                ans.push_back(mx);
            mx=-1;
        }
        return ans;
    }
};
